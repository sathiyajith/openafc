/******************************************************************************************/
/**** Automatically Generated file, DO NOT EDIT.                                       ****/
/**** HEADER file generated by gen_parameter_template.pl.                              ****/
/**** FILE: "parameter_template.h"                                                     ****/
/******************************************************************************************/

#ifndef PARAMETER_TEMPLATE_H
#define PARAMETER_TEMPLATE_H

/******************************************************************************************/
/**** CLASS: ParameterTemplateClass                                                    ****/
/******************************************************************************************/
class ParameterTemplateClass
{
public:
    ParameterTemplateClass();
    ~ParameterTemplateClass();
    void readFile(const char *filename);
    void print(FILE *fp) const;
    std::string name;
    std::string function;
    std::string srcFile3D;
    std::string srcFile2D;
    std::string srcFileRaster;
    std::string srcFileVector;
    std::string srcHeightFieldName;
    std::string heightFieldName3D;
    std::string heightFieldName2D;
    std::string outputHeightFieldName;
    std::string cmpFileRaster;
    std::string outputFile;
    std::string outputLayer;
    double nodataVal;
    double clampMin;
    double clampMax;
    double minMag;
    std::string tmpImageFile;
    std::string imageFile;
    std::string imageFile2;
    double imageLonLatRes;
    int verbose;
    double minLon;
    double maxLon;
    double minLat;
    double maxLat;
    int samplesPerDeg;
    int polygonExpansion;
    int polygonSimplify;
    std::string kmzFile;
    std::string kmlFile;
    double minLonWrap;
    int seed;

private:
    void readFile_1_0(FILE *fp, char *line, const char *filename, int linenum);
};
/******************************************************************************************/

#endif

/******************************************************************************************/
/**** END of HEADER file generated by gen_parameter_template.pl                        ****/
/******************************************************************************************/
