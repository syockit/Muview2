// This part is originally created and released into the public
// domain by Gunnar Selke <gselke@physnet.uni-hamburg.de>.
// Modified by Graham Rowlands <grahamrow@gmail.com>

#ifndef OMF_HEADER_H
#define OMF_HEADER_H
#include <QString>
#include <QStringList>
#include <string>
#include <vector>

enum OMFFormat 
{
	OMF_FORMAT_ASCII,
	OMF_FORMAT_BINARY_4,
	OMF_FORMAT_BINARY_8
};

struct OMFHeader 
{
  OMFHeader();
  ~OMFHeader();

  QString Title;
  QStringList Desc;
  QStringList valueunits;  // OVF 2.0
  QStringList valuelabels; // OVF 2.0
  QString meshunit;  // e.g. "m"
  QString valueunit; // e.g. "A/m"
  double valuemultiplier;
  double xmin, ymin, zmin;
  double xmax, ymax, zmax;
  double ValueRangeMaxMag, ValueRangeMinMag;
  QString meshtype; // "rectangular"
  double xbase, ybase, zbase;
  double xstepsize, ystepsize, zstepsize;
  int xnodes, ynodes, znodes;
  int valuedim; // OVF 2.0
  int version;
};

#endif
