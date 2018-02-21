#ifndef datasetinfo_h
#define datasetinfo_h

#include "TString.h"
#include "TSystem.h"

#include "Tools/datasetinfo/getDatasetInfo.h"
#include "CMS3.h"

namespace CoreUtil
{
    class datasetinfo
    {
        public:
            DatasetInfoFromFile df;

            datasetinfo();
            ~datasetinfo();

            float getScale1fb();
            float getXsec();
    };
}

#endif