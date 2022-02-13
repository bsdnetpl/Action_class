

#ifndef   xml_actionH
#define   xml_actionH

#include <System.hpp>
#include <xmldom.hpp>
#include <XMLDoc.hpp>
#include <XMLIntf.hpp>
#include <XMLNodeImp.h>


// Forward Decls 

__interface IXMLCatalogType;
typedef System::DelphiInterface<IXMLCatalogType> _di_IXMLCatalogType;
__interface IXMLCategoriesType;
typedef System::DelphiInterface<IXMLCategoriesType> _di_IXMLCategoriesType;
__interface IXMLMainCategoryType;
typedef System::DelphiInterface<IXMLMainCategoryType> _di_IXMLMainCategoryType;
__interface IXMLSubCategoriesType;
typedef System::DelphiInterface<IXMLSubCategoriesType> _di_IXMLSubCategoriesType;
__interface IXMLSubCategoryType;
typedef System::DelphiInterface<IXMLSubCategoryType> _di_IXMLSubCategoryType;
__interface IXMLProducersType;
typedef System::DelphiInterface<IXMLProducersType> _di_IXMLProducersType;
__interface IXMLProducerType;
typedef System::DelphiInterface<IXMLProducerType> _di_IXMLProducerType;
__interface IXMLProductsType;
typedef System::DelphiInterface<IXMLProductsType> _di_IXMLProductsType;
__interface IXMLProductType;
typedef System::DelphiInterface<IXMLProductType> _di_IXMLProductType;
__interface IXMLImagesType;
typedef System::DelphiInterface<IXMLImagesType> _di_IXMLImagesType;
__interface IXMLImageType;
typedef System::DelphiInterface<IXMLImageType> _di_IXMLImageType;
__interface IXMLMultimediaType;
typedef System::DelphiInterface<IXMLMultimediaType> _di_IXMLMultimediaType;
__interface IXMLMultimediaItemType;
typedef System::DelphiInterface<IXMLMultimediaItemType> _di_IXMLMultimediaItemType;
__interface IXMLTechnicalSpecificationType;
typedef System::DelphiInterface<IXMLTechnicalSpecificationType> _di_IXMLTechnicalSpecificationType;
__interface IXMLSectionType;
typedef System::DelphiInterface<IXMLSectionType> _di_IXMLSectionType;
__interface IXMLAttributesType;
typedef System::DelphiInterface<IXMLAttributesType> _di_IXMLAttributesType;
__interface IXMLAttributeType;
typedef System::DelphiInterface<IXMLAttributeType> _di_IXMLAttributeType;
__interface IXMLValuesType;
typedef System::DelphiInterface<IXMLValuesType> _di_IXMLValuesType;
__interface IXMLValueType;
typedef System::DelphiInterface<IXMLValueType> _di_IXMLValueType;
__interface IXMLParametersType;
typedef System::DelphiInterface<IXMLParametersType> _di_IXMLParametersType;
__interface IXMLParameterType;
typedef System::DelphiInterface<IXMLParameterType> _di_IXMLParameterType;

// IXMLCatalogType 

__interface INTERFACE_UUID("{06B88D0F-6ADC-46F5-AC38-50F14386B2D5}") IXMLCatalogType : public IXMLNode
{
public:
  // Property Accessors 
  virtual UnicodeString __fastcall Get_date() = 0;
  virtual UnicodeString __fastcall Get_language() = 0;
  virtual UnicodeString __fastcall Get_currency() = 0;
  virtual UnicodeString __fastcall Get_md5() = 0;
  virtual _di_IXMLCategoriesType __fastcall Get_Categories() = 0;
  virtual _di_IXMLProducersType __fastcall Get_Producers() = 0;
  virtual _di_IXMLProductsType __fastcall Get_Products() = 0;
  virtual void __fastcall Set_date(UnicodeString Value) = 0;
  virtual void __fastcall Set_language(UnicodeString Value) = 0;
  virtual void __fastcall Set_currency(UnicodeString Value) = 0;
  virtual void __fastcall Set_md5(UnicodeString Value) = 0;
  // Methods & Properties 
  __property UnicodeString date = { read=Get_date, write=Set_date };
  __property UnicodeString language = { read=Get_language, write=Set_language };
  __property UnicodeString currency = { read=Get_currency, write=Set_currency };
  __property UnicodeString md5 = { read=Get_md5, write=Set_md5 };
  __property _di_IXMLCategoriesType Categories = { read=Get_Categories };
  __property _di_IXMLProducersType Producers = { read=Get_Producers };
  __property _di_IXMLProductsType Products = { read=Get_Products };
};

// IXMLCategoriesType 

__interface INTERFACE_UUID("{4AA27F38-4556-476C-8D60-DE31AE5C4D55}") IXMLCategoriesType : public IXMLNodeCollection
{
public:
public:
  // Property Accessors 
  virtual _di_IXMLMainCategoryType __fastcall Get_MainCategory(int Index) = 0;
  // Methods & Properties 
  virtual _di_IXMLMainCategoryType __fastcall Add() = 0;
  virtual _di_IXMLMainCategoryType __fastcall Insert(const int Index) = 0;
  __property _di_IXMLMainCategoryType MainCategory[int Index] = { read=Get_MainCategory };/* default */
};

// IXMLMainCategoryType 

__interface INTERFACE_UUID("{CF175E39-EC6E-4C87-8B90-83AAEE2C6B13}") IXMLMainCategoryType : public IXMLNode
{
public:
  // Property Accessors 
  virtual UnicodeString __fastcall Get_id() = 0;
  virtual UnicodeString __fastcall Get_name() = 0;
  virtual _di_IXMLSubCategoriesType __fastcall Get_SubCategories() = 0;
  virtual void __fastcall Set_id(UnicodeString Value) = 0;
  virtual void __fastcall Set_name(UnicodeString Value) = 0;
  // Methods & Properties 
  __property UnicodeString id = { read=Get_id, write=Set_id };
  __property UnicodeString name = { read=Get_name, write=Set_name };
  __property _di_IXMLSubCategoriesType SubCategories = { read=Get_SubCategories };
};

// IXMLSubCategoriesType 

__interface INTERFACE_UUID("{A7D731D0-1C15-4849-8665-C667AE34D510}") IXMLSubCategoriesType : public IXMLNodeCollection
{
public:
public:
  // Property Accessors 
  virtual _di_IXMLSubCategoryType __fastcall Get_SubCategory(int Index) = 0;
  // Methods & Properties 
  virtual _di_IXMLSubCategoryType __fastcall Add() = 0;
  virtual _di_IXMLSubCategoryType __fastcall Insert(const int Index) = 0;
  __property _di_IXMLSubCategoryType SubCategory[int Index] = { read=Get_SubCategory };/* default */
};

// IXMLSubCategoryType 

__interface INTERFACE_UUID("{001820F8-2BBB-4561-9378-A24DAD027A4B}") IXMLSubCategoryType : public IXMLNode
{
public:
  // Property Accessors 
  virtual UnicodeString __fastcall Get_id() = 0;
  virtual UnicodeString __fastcall Get_name() = 0;
  virtual void __fastcall Set_id(UnicodeString Value) = 0;
  virtual void __fastcall Set_name(UnicodeString Value) = 0;
  // Methods & Properties 
  __property UnicodeString id = { read=Get_id, write=Set_id };
  __property UnicodeString name = { read=Get_name, write=Set_name };
};

// IXMLProducersType 

__interface INTERFACE_UUID("{47FD8E25-B954-43A1-860F-EE90A6EE07CC}") IXMLProducersType : public IXMLNodeCollection
{
public:
public:
  // Property Accessors 
  virtual _di_IXMLProducerType __fastcall Get_Producer(int Index) = 0;
  // Methods & Properties 
  virtual _di_IXMLProducerType __fastcall Add() = 0;
  virtual _di_IXMLProducerType __fastcall Insert(const int Index) = 0;
  __property _di_IXMLProducerType Producer[int Index] = { read=Get_Producer };/* default */
};

// IXMLProducerType 

__interface INTERFACE_UUID("{09A6E179-97B6-442F-87EF-D86051C459CC}") IXMLProducerType : public IXMLNode
{
public:
  // Property Accessors 
  virtual UnicodeString __fastcall Get_id() = 0;
  virtual UnicodeString __fastcall Get_name() = 0;
  virtual void __fastcall Set_id(UnicodeString Value) = 0;
  virtual void __fastcall Set_name(UnicodeString Value) = 0;
  // Methods & Properties 
  __property UnicodeString id = { read=Get_id, write=Set_id };
  __property UnicodeString name = { read=Get_name, write=Set_name };
};

// IXMLProductsType 

__interface INTERFACE_UUID("{5D36B4DD-16C4-4702-9B27-365133AF45D7}") IXMLProductsType : public IXMLNodeCollection
{
public:
public:
  // Property Accessors 
  virtual _di_IXMLProductType __fastcall Get_Product(int Index) = 0;
  // Methods & Properties 
  virtual _di_IXMLProductType __fastcall Add() = 0;
  virtual _di_IXMLProductType __fastcall Insert(const int Index) = 0;
  __property _di_IXMLProductType Product[int Index] = { read=Get_Product };/* default */
};

// IXMLProductType 

__interface INTERFACE_UUID("{8AF68428-A83B-4899-B2BA-0CB2AC3F45EC}") IXMLProductType : public IXMLNode
{
public:
  // Property Accessors 
  virtual UnicodeString __fastcall Get_id() = 0;
  virtual UnicodeString __fastcall Get_name() = 0;
  virtual UnicodeString __fastcall Get_producer() = 0;
  virtual UnicodeString __fastcall Get_categoryId() = 0;
  virtual UnicodeString __fastcall Get_warranty() = 0;
  virtual UnicodeString __fastcall Get_priceNet() = 0;
  virtual Integer __fastcall Get_vat() = 0;
  virtual UnicodeString __fastcall Get_vat_type() = 0;
  virtual UnicodeString __fastcall Get_pkwiu() = 0;
  virtual UnicodeString __fastcall Get_externalWarehouse() = 0;
  virtual Integer __fastcall Get_available() = 0;
  virtual UnicodeString __fastcall Get_lastChange() = 0;
  virtual UnicodeString __fastcall Get_date() = 0;
  virtual UnicodeString __fastcall Get_onOrder() = 0;
  virtual UnicodeString __fastcall Get_specialOffer() = 0;
  virtual UnicodeString __fastcall Get_smallPallet() = 0;
  virtual UnicodeString __fastcall Get_productIsLarge() = 0;
  virtual UnicodeString __fastcall Get_reported() = 0;
  virtual UnicodeString __fastcall Get_EAN() = 0;
  virtual UnicodeString __fastcall Get_manufacturerPartNumber() = 0;
  virtual UnicodeString __fastcall Get_saleReason() = 0;
  virtual Integer __fastcall Get_sizeWidth() = 0;
  virtual Integer __fastcall Get_sizeLength() = 0;
  virtual Integer __fastcall Get_sizeHeight() = 0;
  virtual Integer __fastcall Get_weight() = 0;
  virtual UnicodeString __fastcall Get_sizeMeasurementUnit() = 0;
  virtual UnicodeString __fastcall Get_weightMeasurementUnit() = 0;
  virtual _di_IXMLImagesType __fastcall Get_Images() = 0;
  virtual _di_IXMLMultimediaType __fastcall Get_Multimedia() = 0;
  virtual _di_IXMLTechnicalSpecificationType __fastcall Get_TechnicalSpecification() = 0;
  virtual void __fastcall Set_id(UnicodeString Value) = 0;
  virtual void __fastcall Set_name(UnicodeString Value) = 0;
  virtual void __fastcall Set_producer(UnicodeString Value) = 0;
  virtual void __fastcall Set_categoryId(UnicodeString Value) = 0;
  virtual void __fastcall Set_warranty(UnicodeString Value) = 0;
  virtual void __fastcall Set_priceNet(UnicodeString Value) = 0;
  virtual void __fastcall Set_vat(Integer Value) = 0;
  virtual void __fastcall Set_vat_type(UnicodeString Value) = 0;
  virtual void __fastcall Set_pkwiu(UnicodeString Value) = 0;
  virtual void __fastcall Set_externalWarehouse(UnicodeString Value) = 0;
  virtual void __fastcall Set_available(Integer Value) = 0;
  virtual void __fastcall Set_lastChange(UnicodeString Value) = 0;
  virtual void __fastcall Set_date(UnicodeString Value) = 0;
  virtual void __fastcall Set_onOrder(UnicodeString Value) = 0;
  virtual void __fastcall Set_specialOffer(UnicodeString Value) = 0;
  virtual void __fastcall Set_smallPallet(UnicodeString Value) = 0;
  virtual void __fastcall Set_productIsLarge(UnicodeString Value) = 0;
  virtual void __fastcall Set_reported(UnicodeString Value) = 0;
  virtual void __fastcall Set_EAN(UnicodeString Value) = 0;
  virtual void __fastcall Set_manufacturerPartNumber(UnicodeString Value) = 0;
  virtual void __fastcall Set_sizeWidth(Integer Value) = 0;
  virtual void __fastcall Set_sizeLength(Integer Value) = 0;
  virtual void __fastcall Set_sizeHeight(Integer Value) = 0;
  virtual void __fastcall Set_weight(Integer Value) = 0;
  virtual void __fastcall Set_sizeMeasurementUnit(UnicodeString Value) = 0;
  virtual void __fastcall Set_weightMeasurementUnit(UnicodeString Value) = 0;
//Multimedia
  // Methods & Properties
  __property UnicodeString id = { read=Get_id, write=Set_id };
  __property UnicodeString name = { read=Get_name, write=Set_name };
  __property UnicodeString producer = { read=Get_producer, write=Set_producer };
  __property UnicodeString categoryId = { read=Get_categoryId, write=Set_categoryId };
  __property UnicodeString warranty = { read=Get_warranty, write=Set_warranty };
  __property UnicodeString priceNet = { read=Get_priceNet, write=Set_priceNet };
  __property Integer vat = { read=Get_vat, write=Set_vat };
  __property UnicodeString vat_type = { read=Get_vat_type, write=Set_vat_type };
  __property UnicodeString pkwiu = { read=Get_pkwiu, write=Set_pkwiu };
  __property UnicodeString externalWarehouse = { read=Get_externalWarehouse, write=Set_externalWarehouse };
  __property Integer available = { read=Get_available, write=Set_available };
  __property UnicodeString lastChange = { read=Get_lastChange, write=Set_lastChange };
  __property UnicodeString date = { read=Get_date, write=Set_date };
  __property UnicodeString onOrder = { read=Get_onOrder, write=Set_onOrder };
  __property UnicodeString specialOffer = { read=Get_specialOffer, write=Set_specialOffer };
  __property UnicodeString smallPallet = { read=Get_smallPallet, write=Set_smallPallet };
  __property UnicodeString productIsLarge = { read=Get_productIsLarge, write=Set_productIsLarge };
  __property UnicodeString reported = { read=Get_reported, write=Set_reported };
  __property UnicodeString EAN = { read=Get_EAN, write=Set_EAN };
  __property UnicodeString manufacturerPartNumber = { read=Get_manufacturerPartNumber, write=Set_manufacturerPartNumber };
  __property Integer sizeWidth = { read=Get_sizeWidth, write=Set_sizeWidth };
  __property Integer sizeLength = { read=Get_sizeLength, write=Set_sizeLength };
  __property Integer sizeHeight = { read=Get_sizeHeight, write=Set_sizeHeight };
  __property Integer weight = { read=Get_weight, write=Set_weight };
  __property UnicodeString sizeMeasurementUnit = { read=Get_sizeMeasurementUnit, write=Set_sizeMeasurementUnit };
  __property UnicodeString weightMeasurementUnit = { read=Get_weightMeasurementUnit, write=Set_weightMeasurementUnit };
  __property _di_IXMLImagesType Images = { read=Get_Images };
  __property _di_IXMLMultimediaType Multimedia = { read=Get_Multimedia };
  __property _di_IXMLTechnicalSpecificationType TechnicalSpecification = { read=Get_TechnicalSpecification };
};

// IXMLImagesType 

__interface INTERFACE_UUID("{226286EE-FAD6-4859-8AEB-953105F7EA65}") IXMLImagesType : public IXMLNodeCollection
{
public:
public:
  // Property Accessors 
  virtual _di_IXMLImageType __fastcall Get_Image(int Index) = 0;
  // Methods & Properties 
  virtual _di_IXMLImageType __fastcall Add() = 0;
  virtual _di_IXMLImageType __fastcall Insert(const int Index) = 0;
  __property _di_IXMLImageType Image[int Index] = { read=Get_Image };/* default */
};

// IXMLImageType 

__interface INTERFACE_UUID("{5496B3A7-1BD5-4F68-8B81-D45808BE8BFD}") IXMLImageType : public IXMLNode
{
public:
  // Property Accessors 
  virtual UnicodeString __fastcall Get_url() = 0;
  virtual Integer __fastcall Get_isMain() = 0;
  virtual UnicodeString __fastcall Get_date() = 0;
  virtual Integer __fastcall Get_copyright() = 0;
  virtual void __fastcall Set_url(UnicodeString Value) = 0;
  virtual void __fastcall Set_isMain(Integer Value) = 0;
  virtual void __fastcall Set_date(UnicodeString Value) = 0;
  virtual void __fastcall Set_copyright(Integer Value) = 0;
  // Methods & Properties 
  __property UnicodeString url = { read=Get_url, write=Set_url };
  __property Integer isMain = { read=Get_isMain, write=Set_isMain };
  __property UnicodeString date = { read=Get_date, write=Set_date };
  __property Integer copyright = { read=Get_copyright, write=Set_copyright };
};
// IXMLMultimediaType

__interface INTERFACE_UUID("{1817EFAB-18D1-42B0-ACA7-04EFA813DC9C}") IXMLMultimediaType : public IXMLNode
{
public:
  // Property Accessors
  virtual _di_IXMLMultimediaItemType __fastcall Get_MultimediaItem() = 0;
  // Methods & Properties
  __property _di_IXMLMultimediaItemType MultimediaItem = { read=Get_MultimediaItem };
};

// IXMLMultimediaItemType

__interface INTERFACE_UUID("{9C624DCA-17C9-4AEF-BA67-B763CF69685D}") IXMLMultimediaItemType : public IXMLNode
{
public:
  // Property Accessors
  virtual UnicodeString __fastcall Get_url() = 0;
  virtual UnicodeString __fastcall Get_description() = 0;
  virtual UnicodeString __fastcall Get_type() = 0;
  virtual Integer __fastcall Get_copyright() = 0;
  virtual void __fastcall Set_url(UnicodeString Value) = 0;
  virtual void __fastcall Set_description(UnicodeString Value) = 0;
  virtual void __fastcall Set_type(UnicodeString Value) = 0;
  virtual void __fastcall Set_copyright(Integer Value) = 0;
  // Methods & Properties
  __property UnicodeString url = { read=Get_url, write=Set_url };
  __property UnicodeString description = { read=Get_description, write=Set_description };
  __property UnicodeString type = { read=Get_type, write=Set_type };
  __property Integer copyright = { read=Get_copyright, write=Set_copyright };
};
// IXMLTechnicalSpecificationType 

__interface INTERFACE_UUID("{853A151A-6E0B-474C-9F88-9F233C8F9BE8}") IXMLTechnicalSpecificationType : public IXMLNodeCollection
{
public:
public:
  // Property Accessors 
  virtual _di_IXMLSectionType __fastcall Get_Section(int Index) = 0;
  // Methods & Properties 
  virtual _di_IXMLSectionType __fastcall Add() = 0;
  virtual _di_IXMLSectionType __fastcall Insert(const int Index) = 0;
  __property _di_IXMLSectionType Section[int Index] = { read=Get_Section };/* default */
};

// IXMLSectionType

__interface INTERFACE_UUID("{91E3664E-885B-4D90-8353-106808525DFA}") IXMLSectionType : public IXMLNode
{
public:
  // Property Accessors 
  virtual UnicodeString __fastcall Get_name() = 0;
  virtual _di_IXMLAttributesType __fastcall Get_Attributes() = 0;
	virtual _di_IXMLParametersType __fastcall Get_Parameters() = 0;
  virtual void __fastcall Set_name(UnicodeString Value) = 0;
  // Methods & Properties
  __property UnicodeString name = { read=Get_name, write=Set_name };
  __property _di_IXMLAttributesType Attributes = { read=Get_Attributes };
   __property _di_IXMLParametersType Parameters = { read=Get_Parameters };
};

// IXMLAttributesType 

__interface INTERFACE_UUID("{16F1F052-786F-4D6D-9A94-9929E0F4ECA5}") IXMLAttributesType : public IXMLNodeCollection
{
public:
public:
  // Property Accessors 
  virtual _di_IXMLAttributeType __fastcall Get_Attribute(int Index) = 0;
  // Methods & Properties 
  virtual _di_IXMLAttributeType __fastcall Add() = 0;
  virtual _di_IXMLAttributeType __fastcall Insert(const int Index) = 0;
  __property _di_IXMLAttributeType Attribute[int Index] = { read=Get_Attribute };/* default */
};

// IXMLAttributeType 

__interface INTERFACE_UUID("{C68895A2-A36A-4B52-A111-0E5117C33DCA}") IXMLAttributeType : public IXMLNode
{
public:
  // Property Accessors 
  virtual UnicodeString __fastcall Get_name() = 0;
  virtual _di_IXMLValuesType __fastcall Get_Values() = 0;
  virtual void __fastcall Set_name(UnicodeString Value) = 0;
  // Methods & Properties 
  __property UnicodeString name = { read=Get_name, write=Set_name };
  __property _di_IXMLValuesType Values = { read=Get_Values };
};

// IXMLValuesType 

__interface INTERFACE_UUID("{A464232A-168B-476C-ACF8-6050FDE89509}") IXMLValuesType : public IXMLNodeCollection
{
public:
public:
  // Property Accessors 
  virtual _di_IXMLValueType __fastcall Get_Value(int Index) = 0;
  // Methods & Properties 
  virtual _di_IXMLValueType __fastcall Add() = 0;
  virtual _di_IXMLValueType __fastcall Insert(const int Index) = 0;
  __property _di_IXMLValueType Value[int Index] = { read=Get_Value };/* default */
};

// IXMLValueType

__interface INTERFACE_UUID("{1F5B4649-1FC4-48CA-BEC1-864277EE13F5}") IXMLValueType : public IXMLNode
{
public:
  // Property Accessors 
  virtual UnicodeString __fastcall Get_Name() = 0;
  virtual void __fastcall Set_Name(UnicodeString Value) = 0;
  // Methods & Properties 
  __property UnicodeString Name = { read=Get_Name, write=Set_Name };
};

// IXMLParametersType

__interface INTERFACE_UUID("{F691E915-34B3-487D-886F-B435FB60EE66}") IXMLParametersType : public IXMLNodeCollection
{
public:
public:
  // Property Accessors
  virtual _di_IXMLParameterType __fastcall Get_Parameter(int Index) = 0;
  // Methods & Properties
  virtual _di_IXMLParameterType __fastcall Add() = 0;
  virtual _di_IXMLParameterType __fastcall Insert(const int Index) = 0;
  __property _di_IXMLParameterType Parameter[int Index] = { read=Get_Parameter };/* default */
};

// IXMLParameterType

__interface INTERFACE_UUID("{1B2D749E-370C-48B4-A5E2-E02BF3DD286F}") IXMLParameterType : public IXMLNode
{
public:
  // Property Accessors
  virtual UnicodeString __fastcall Get_name() = 0;
  virtual UnicodeString __fastcall Get_value() = 0;
  virtual void __fastcall Set_name(UnicodeString Value) = 0;
  virtual void __fastcall Set_value(UnicodeString Value) = 0;
  // Methods & Properties
  __property UnicodeString name = { read=Get_name, write=Set_name };
  __property UnicodeString value = { read=Get_value, write=Set_value };
};

// Forward Decls 

class TXMLCatalogType;
class TXMLCategoriesType;
class TXMLMainCategoryType;
class TXMLSubCategoriesType;
class TXMLSubCategoryType;
class TXMLProducersType;
class TXMLProducerType;
class TXMLProductsType;
class TXMLProductType;
class TXMLImagesType;
class TXMLImageType;
class TXMLMultimediaType;
class TXMLMultimediaItemType;
class TXMLTechnicalSpecificationType;
class TXMLSectionType;
class TXMLAttributesType;
class TXMLAttributeType;
class TXMLValuesType;
class TXMLValueType;
class TXMLParametersType;
class TXMLParameterType;

// TXMLCatalogType 

class TXMLCatalogType : public TXMLNode, public IXMLCatalogType
{
  __IXMLNODE_IMPL__
protected:
  // IXMLCatalogType 
  virtual UnicodeString __fastcall Get_date();
  virtual UnicodeString __fastcall Get_language();
  virtual UnicodeString __fastcall Get_currency();
  virtual UnicodeString __fastcall Get_md5();
  virtual _di_IXMLCategoriesType __fastcall Get_Categories();
  virtual _di_IXMLProducersType __fastcall Get_Producers();
  virtual _di_IXMLProductsType __fastcall Get_Products();
  virtual void __fastcall Set_date(UnicodeString Value);
  virtual void __fastcall Set_language(UnicodeString Value);
  virtual void __fastcall Set_currency(UnicodeString Value);
  virtual void __fastcall Set_md5(UnicodeString Value);
public:
  virtual void __fastcall AfterConstruction(void);
};

// TXMLCategoriesType 

class TXMLCategoriesType : public TXMLNodeCollection, public IXMLCategoriesType
{
  __IXMLNODECOLLECTION_IMPL__
protected:
  // IXMLCategoriesType 
  virtual _di_IXMLMainCategoryType __fastcall Get_MainCategory(int Index);
  virtual _di_IXMLMainCategoryType __fastcall Add();
  virtual _di_IXMLMainCategoryType __fastcall Insert(const int Index);
public:
  virtual void __fastcall AfterConstruction(void);
};

// TXMLMainCategoryType 

class TXMLMainCategoryType : public TXMLNode, public IXMLMainCategoryType
{
  __IXMLNODE_IMPL__
protected:
  // IXMLMainCategoryType 
  virtual UnicodeString __fastcall Get_id();
  virtual UnicodeString __fastcall Get_name();
  virtual _di_IXMLSubCategoriesType __fastcall Get_SubCategories();
  virtual void __fastcall Set_id(UnicodeString Value);
  virtual void __fastcall Set_name(UnicodeString Value);
public:
  virtual void __fastcall AfterConstruction(void);
};

// TXMLSubCategoriesType 

class TXMLSubCategoriesType : public TXMLNodeCollection, public IXMLSubCategoriesType
{
  __IXMLNODECOLLECTION_IMPL__
protected:
  // IXMLSubCategoriesType 
  virtual _di_IXMLSubCategoryType __fastcall Get_SubCategory(int Index);
  virtual _di_IXMLSubCategoryType __fastcall Add();
  virtual _di_IXMLSubCategoryType __fastcall Insert(const int Index);
public:
  virtual void __fastcall AfterConstruction(void);
};

// TXMLSubCategoryType 

class TXMLSubCategoryType : public TXMLNode, public IXMLSubCategoryType
{
  __IXMLNODE_IMPL__
protected:
  // IXMLSubCategoryType 
  virtual UnicodeString __fastcall Get_id();
  virtual UnicodeString __fastcall Get_name();
  virtual void __fastcall Set_id(UnicodeString Value);
  virtual void __fastcall Set_name(UnicodeString Value);
};

// TXMLProducersType 

class TXMLProducersType : public TXMLNodeCollection, public IXMLProducersType
{
  __IXMLNODECOLLECTION_IMPL__
protected:
  // IXMLProducersType 
  virtual _di_IXMLProducerType __fastcall Get_Producer(int Index);
  virtual _di_IXMLProducerType __fastcall Add();
  virtual _di_IXMLProducerType __fastcall Insert(const int Index);
public:
  virtual void __fastcall AfterConstruction(void);
};

// TXMLProducerType 

class TXMLProducerType : public TXMLNode, public IXMLProducerType
{
  __IXMLNODE_IMPL__
protected:
  // IXMLProducerType 
  virtual UnicodeString __fastcall Get_id();
  virtual UnicodeString __fastcall Get_name();
  virtual void __fastcall Set_id(UnicodeString Value);
  virtual void __fastcall Set_name(UnicodeString Value);
};

// TXMLProductsType 

class TXMLProductsType : public TXMLNodeCollection, public IXMLProductsType
{
  __IXMLNODECOLLECTION_IMPL__
protected:
  // IXMLProductsType 
  virtual _di_IXMLProductType __fastcall Get_Product(int Index);
  virtual _di_IXMLProductType __fastcall Add();
  virtual _di_IXMLProductType __fastcall Insert(const int Index);
public:
  virtual void __fastcall AfterConstruction(void);
};

// TXMLProductType 

class TXMLProductType : public TXMLNode, public IXMLProductType
{
  __IXMLNODE_IMPL__
protected:
  // IXMLProductType 
  virtual UnicodeString __fastcall Get_id();
  virtual UnicodeString __fastcall Get_name();
  virtual UnicodeString __fastcall Get_producer();
  virtual UnicodeString __fastcall Get_categoryId();
  virtual UnicodeString __fastcall Get_warranty();
  virtual UnicodeString __fastcall Get_priceNet();
  virtual Integer __fastcall Get_vat();
  virtual UnicodeString __fastcall Get_vat_type();
  virtual UnicodeString __fastcall Get_pkwiu();
  virtual UnicodeString __fastcall Get_externalWarehouse();
  virtual Integer __fastcall Get_available();
  virtual UnicodeString __fastcall Get_lastChange();
  virtual UnicodeString __fastcall Get_date();
  virtual UnicodeString __fastcall Get_onOrder();
  virtual UnicodeString __fastcall Get_specialOffer();
  virtual UnicodeString __fastcall Get_smallPallet();
  virtual UnicodeString __fastcall Get_productIsLarge();
  virtual UnicodeString __fastcall Get_reported();
  virtual UnicodeString __fastcall Get_EAN();
  virtual UnicodeString __fastcall Get_manufacturerPartNumber();
  virtual UnicodeString __fastcall Get_saleReason();
  virtual Integer __fastcall Get_sizeWidth();
  virtual Integer __fastcall Get_sizeLength();
  virtual Integer __fastcall Get_sizeHeight();
  virtual Integer __fastcall Get_weight();
  virtual UnicodeString __fastcall Get_sizeMeasurementUnit();
  virtual UnicodeString __fastcall Get_weightMeasurementUnit();
  virtual _di_IXMLImagesType __fastcall Get_Images();
  virtual _di_IXMLMultimediaType __fastcall Get_Multimedia();
  virtual _di_IXMLTechnicalSpecificationType __fastcall Get_TechnicalSpecification();
  virtual void __fastcall Set_id(UnicodeString Value);
  virtual void __fastcall Set_name(UnicodeString Value);
  virtual void __fastcall Set_producer(UnicodeString Value);
  virtual void __fastcall Set_categoryId(UnicodeString Value);
  virtual void __fastcall Set_warranty(UnicodeString Value);
  virtual void __fastcall Set_priceNet(UnicodeString Value);
  virtual void __fastcall Set_vat(Integer Value);
  virtual void __fastcall Set_vat_type(UnicodeString Value);
  virtual void __fastcall Set_pkwiu(UnicodeString Value);
  virtual void __fastcall Set_externalWarehouse(UnicodeString Value);
  virtual void __fastcall Set_available(Integer Value);
  virtual void __fastcall Set_lastChange(UnicodeString Value);
  virtual void __fastcall Set_date(UnicodeString Value);
  virtual void __fastcall Set_onOrder(UnicodeString Value);
  virtual void __fastcall Set_specialOffer(UnicodeString Value);
  virtual void __fastcall Set_smallPallet(UnicodeString Value);
  virtual void __fastcall Set_productIsLarge(UnicodeString Value);
  virtual void __fastcall Set_reported(UnicodeString Value);
  virtual void __fastcall Set_EAN(UnicodeString Value);
  virtual void __fastcall Set_manufacturerPartNumber(UnicodeString Value);
  virtual void __fastcall Set_sizeWidth(Integer Value);
  virtual void __fastcall Set_sizeLength(Integer Value);
  virtual void __fastcall Set_sizeHeight(Integer Value);
  virtual void __fastcall Set_weight(Integer Value);
  virtual void __fastcall Set_sizeMeasurementUnit(UnicodeString Value);
  virtual void __fastcall Set_weightMeasurementUnit(UnicodeString Value);
 //Multimedia
public:
  virtual void __fastcall AfterConstruction(void);
};

// TXMLImagesType 

class TXMLImagesType : public TXMLNodeCollection, public IXMLImagesType
{
  __IXMLNODECOLLECTION_IMPL__
protected:
  // IXMLImagesType 
  virtual _di_IXMLImageType __fastcall Get_Image(int Index);
  virtual _di_IXMLImageType __fastcall Add();
  virtual _di_IXMLImageType __fastcall Insert(const int Index);
public:
  virtual void __fastcall AfterConstruction(void);
};

// TXMLImageType 

class TXMLImageType : public TXMLNode, public IXMLImageType
{
  __IXMLNODE_IMPL__
protected:
  // IXMLImageType 
  virtual UnicodeString __fastcall Get_url();
  virtual Integer __fastcall Get_isMain();
  virtual UnicodeString __fastcall Get_date();
  virtual Integer __fastcall Get_copyright();
  virtual void __fastcall Set_url(UnicodeString Value);
  virtual void __fastcall Set_isMain(Integer Value);
  virtual void __fastcall Set_date(UnicodeString Value);
  virtual void __fastcall Set_copyright(Integer Value);
};
// TXMLMultimediaType

class TXMLMultimediaType : public TXMLNode, public IXMLMultimediaType
{
  __IXMLNODE_IMPL__
protected:
  // IXMLMultimediaType
  virtual _di_IXMLMultimediaItemType __fastcall Get_MultimediaItem();
public:
  virtual void __fastcall AfterConstruction(void);
};

// TXMLMultimediaItemType

class TXMLMultimediaItemType : public TXMLNode, public IXMLMultimediaItemType
{
  __IXMLNODE_IMPL__
protected:
  // IXMLMultimediaItemType
  virtual UnicodeString __fastcall Get_url();
  virtual UnicodeString __fastcall Get_description();
  virtual UnicodeString __fastcall Get_type();
  virtual Integer __fastcall Get_copyright();
  virtual void __fastcall Set_url(UnicodeString Value);
  virtual void __fastcall Set_description(UnicodeString Value);
  virtual void __fastcall Set_type(UnicodeString Value);
  virtual void __fastcall Set_copyright(Integer Value);
};
// TXMLTechnicalSpecificationType 

class TXMLTechnicalSpecificationType : public TXMLNodeCollection, public IXMLTechnicalSpecificationType
{
  __IXMLNODECOLLECTION_IMPL__
protected:
  // IXMLTechnicalSpecificationType 
  virtual _di_IXMLSectionType __fastcall Get_Section(int Index);
  virtual _di_IXMLSectionType __fastcall Add();
  virtual _di_IXMLSectionType __fastcall Insert(const int Index);
public:
  virtual void __fastcall AfterConstruction(void);
};

// TXMLSectionType

class TXMLSectionType : public TXMLNode, public IXMLSectionType
{
  __IXMLNODE_IMPL__
protected:
  // IXMLSectionType 
  virtual UnicodeString __fastcall Get_name();
  virtual _di_IXMLAttributesType __fastcall Get_Attributes();
  virtual _di_IXMLParametersType __fastcall Get_Parameters();
  virtual void __fastcall Set_name(UnicodeString Value);
public:
  virtual void __fastcall AfterConstruction(void);
};

// TXMLAttributesType 

class TXMLAttributesType : public TXMLNodeCollection, public IXMLAttributesType
{
  __IXMLNODECOLLECTION_IMPL__
protected:
  // IXMLAttributesType 
  virtual _di_IXMLAttributeType __fastcall Get_Attribute(int Index);
  virtual _di_IXMLAttributeType __fastcall Add();
  virtual _di_IXMLAttributeType __fastcall Insert(const int Index);
public:
  virtual void __fastcall AfterConstruction(void);
};

// TXMLAttributeType 

class TXMLAttributeType : public TXMLNode, public IXMLAttributeType
{
  __IXMLNODE_IMPL__
protected:
  // IXMLAttributeType 
  virtual UnicodeString __fastcall Get_name();
  virtual _di_IXMLValuesType __fastcall Get_Values();
  virtual void __fastcall Set_name(UnicodeString Value);
public:
  virtual void __fastcall AfterConstruction(void);
};

// TXMLValuesType 

class TXMLValuesType : public TXMLNodeCollection, public IXMLValuesType
{
  __IXMLNODECOLLECTION_IMPL__
protected:
  // IXMLValuesType 
  virtual _di_IXMLValueType __fastcall Get_Value(int Index);
  virtual _di_IXMLValueType __fastcall Add();
  virtual _di_IXMLValueType __fastcall Insert(const int Index);
public:
  virtual void __fastcall AfterConstruction(void);
};

// TXMLValueType

class TXMLValueType : public TXMLNode, public IXMLValueType
{
  __IXMLNODE_IMPL__
protected:
  // IXMLValueType 
  virtual UnicodeString __fastcall Get_Name();
  virtual void __fastcall Set_Name(UnicodeString Value);
};

// TXMLParametersType

class TXMLParametersType : public TXMLNodeCollection, public IXMLParametersType
{
  __IXMLNODECOLLECTION_IMPL__
protected:
  // IXMLParametersType
  virtual _di_IXMLParameterType __fastcall Get_Parameter(int Index);
  virtual _di_IXMLParameterType __fastcall Add();
  virtual _di_IXMLParameterType __fastcall Insert(const int Index);
public:
  virtual void __fastcall AfterConstruction(void);
};

// TXMLParameterType

class TXMLParameterType : public TXMLNode, public IXMLParameterType
{
  __IXMLNODE_IMPL__
protected:
  // IXMLParameterType
  virtual UnicodeString __fastcall Get_name();
  virtual UnicodeString __fastcall Get_value();
  virtual void __fastcall Set_name(UnicodeString Value);
  virtual void __fastcall Set_value(UnicodeString Value);
};

// Global Functions 

_di_IXMLCatalogType __fastcall GetCatalog(_di_IXMLDocument Doc);
_di_IXMLCatalogType __fastcall GetCatalog(TXMLDocument *Doc);
_di_IXMLCatalogType __fastcall LoadCatalog(const UnicodeString& FileName);
_di_IXMLCatalogType __fastcall  NewCatalog();

#define TargetNamespace ""

#endif