//##########################################################################
//#                                                                        #
//#                              CLOUDCOMPARE                              #
//#                                                                        #
//#  This program is free software; you can redistribute it and/or modify  #
//#  it under the terms of the GNU General Public License as published by  #
//#  the Free Software Foundation; version 2 or later of the License.      #
//#                                                                        #
//#  This program is distributed in the hope that it will be useful,       #
//#  but WITHOUT ANY WARRANTY; without even the implied warranty of        #
//#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the          #
//#  GNU General Public License for more details.                          #
//#                                                                        #
//#                   COPYRIGHT: Daniel Girardeau-Montaut                  #
//#                                                                        #
//##########################################################################

#ifndef CC_GEOM_FEATURES_DIALOG_HEADER
#define CC_GEOM_FEATURES_DIALOG_HEADER

//Local
#include "ccLibAlgorithms.h"

//Qt
#include <QDialog>

#include <ui_geomFeaturesDlg.h>

//! Dialog for computing the density of a point clouds
class ccGeomFeaturesDlg: public QDialog, public Ui::GeomFeaturesDialog
{
public:

	//! Default constructor
	explicit ccGeomFeaturesDlg(QWidget* parent = nullptr);

	float radius();
	int num();
};

#endif // CC_GEOM_FEATURES_DIALOG_HEADER
