

#include <vcl.h>
#pragma hdrstop

#include "xml_action.h"


// Global Functions 

_di_IXMLCatalogType __fastcall GetCatalog(_di_IXMLDocument Doc)
{
  return (_di_IXMLCatalogType) Doc->GetDocBinding("Catalog", __classid(TXMLCatalogType), TargetNamespace);
};

_di_IXMLCatalogType __fastcall GetCatalog(TXMLDocument *Doc)
{
  _di_IXMLDocument DocIntf;
  Doc->GetInterface(DocIntf);
  return GetCatalog(DocIntf);
};

_di_IXMLCatalogType __fastcall LoadCatalog(const UnicodeString& FileName)
{
  return (_di_IXMLCatalogType) LoadXMLDocument(FileName)->GetDocBinding("Catalog", __classid(TXMLCatalogType), TargetNamespace);
};

_di_IXMLCatalogType __fastcall  NewCatalog()
{
  return (_di_IXMLCatalogType) NewXMLDocument()->GetDocBinding("Catalog", __classid(TXMLCatalogType), TargetNamespace);
};

// TXMLCatalogType 

void __fastcall TXMLCatalogType::AfterConstruction(void)
{
  RegisterChildNode(UnicodeString("Categories"), __classid(TXMLCategoriesType));
  RegisterChildNode(UnicodeString("Producers"), __classid(TXMLProducersType));
  RegisterChildNode(UnicodeString("Products"), __classid(TXMLProductsType));
  TXMLNode::AfterConstruction();
};

UnicodeString __fastcall TXMLCatalogType::Get_date()
{
  return TXMLNode::AttributeNodes->Nodes[UnicodeString("date")]->Text;
};

void __fastcall TXMLCatalogType::Set_date(UnicodeString Value)
{
  TXMLNode::SetAttribute(UnicodeString("date"), Value);
};

UnicodeString __fastcall TXMLCatalogType::Get_language()
{
  return TXMLNode::AttributeNodes->Nodes[UnicodeString("language")]->Text;
};

void __fastcall TXMLCatalogType::Set_language(UnicodeString Value)
{
  TXMLNode::SetAttribute(UnicodeString("language"), Value);
};

UnicodeString __fastcall TXMLCatalogType::Get_currency()
{
  return TXMLNode::AttributeNodes->Nodes[UnicodeString("currency")]->Text;
};

void __fastcall TXMLCatalogType::Set_currency(UnicodeString Value)
{
  TXMLNode::SetAttribute(UnicodeString("currency"), Value);
};

UnicodeString __fastcall TXMLCatalogType::Get_md5()
{
  return TXMLNode::AttributeNodes->Nodes[UnicodeString("md5")]->Text;
};

void __fastcall TXMLCatalogType::Set_md5(UnicodeString Value)
{
  TXMLNode::SetAttribute(UnicodeString("md5"), Value);
};

_di_IXMLCategoriesType __fastcall TXMLCatalogType::Get_Categories()
{
  return (_di_IXMLCategoriesType) TXMLNode::ChildNodes->Nodes[UnicodeString("Categories")];
};

_di_IXMLProducersType __fastcall TXMLCatalogType::Get_Producers()
{
  return (_di_IXMLProducersType) TXMLNode::ChildNodes->Nodes[UnicodeString("Producers")];
};

_di_IXMLProductsType __fastcall TXMLCatalogType::Get_Products()
{
  return (_di_IXMLProductsType) TXMLNode::ChildNodes->Nodes[UnicodeString("Products")];
};

// TXMLCategoriesType 

void __fastcall TXMLCategoriesType::AfterConstruction(void)
{
  RegisterChildNode(UnicodeString("MainCategory"), __classid(TXMLMainCategoryType));
  ItemTag = "MainCategory";
  ItemInterface = __uuidof(IXMLMainCategoryType);
  TXMLNodeCollection::AfterConstruction();
};

_di_IXMLMainCategoryType __fastcall TXMLCategoriesType::Get_MainCategory(int Index)
{
  return (_di_IXMLMainCategoryType) TXMLNodeCollection::List->Nodes[Index];
};

_di_IXMLMainCategoryType __fastcall TXMLCategoriesType::Add()
{
  return (_di_IXMLMainCategoryType) AddItem(-1);
};

_di_IXMLMainCategoryType __fastcall TXMLCategoriesType::Insert(const int Index)
{
  return (_di_IXMLMainCategoryType) AddItem(Index);
};

// TXMLMainCategoryType 

void __fastcall TXMLMainCategoryType::AfterConstruction(void)
{
  RegisterChildNode(UnicodeString("SubCategories"), __classid(TXMLSubCategoriesType));
  TXMLNode::AfterConstruction();
};

UnicodeString __fastcall TXMLMainCategoryType::Get_id()
{
  return TXMLNode::AttributeNodes->Nodes[UnicodeString("id")]->Text;
};

void __fastcall TXMLMainCategoryType::Set_id(UnicodeString Value)
{
  TXMLNode::SetAttribute(UnicodeString("id"), Value);
};

UnicodeString __fastcall TXMLMainCategoryType::Get_name()
{
  return TXMLNode::AttributeNodes->Nodes[UnicodeString("name")]->Text;
};

void __fastcall TXMLMainCategoryType::Set_name(UnicodeString Value)
{
  TXMLNode::SetAttribute(UnicodeString("name"), Value);
};

_di_IXMLSubCategoriesType __fastcall TXMLMainCategoryType::Get_SubCategories()
{
  return (_di_IXMLSubCategoriesType) TXMLNode::ChildNodes->Nodes[UnicodeString("SubCategories")];
};

// TXMLSubCategoriesType 

void __fastcall TXMLSubCategoriesType::AfterConstruction(void)
{
  RegisterChildNode(UnicodeString("SubCategory"), __classid(TXMLSubCategoryType));
  ItemTag = "SubCategory";
  ItemInterface = __uuidof(IXMLSubCategoryType);
  TXMLNodeCollection::AfterConstruction();
};

_di_IXMLSubCategoryType __fastcall TXMLSubCategoriesType::Get_SubCategory(int Index)
{
  return (_di_IXMLSubCategoryType) TXMLNodeCollection::List->Nodes[Index];
};

_di_IXMLSubCategoryType __fastcall TXMLSubCategoriesType::Add()
{
  return (_di_IXMLSubCategoryType) AddItem(-1);
};

_di_IXMLSubCategoryType __fastcall TXMLSubCategoriesType::Insert(const int Index)
{
  return (_di_IXMLSubCategoryType) AddItem(Index);
};

// TXMLSubCategoryType 

UnicodeString __fastcall TXMLSubCategoryType::Get_id()
{
  return TXMLNode::AttributeNodes->Nodes[UnicodeString("id")]->Text;
};

void __fastcall TXMLSubCategoryType::Set_id(UnicodeString Value)
{
  TXMLNode::SetAttribute(UnicodeString("id"), Value);
};

UnicodeString __fastcall TXMLSubCategoryType::Get_name()
{
  return TXMLNode::AttributeNodes->Nodes[UnicodeString("name")]->Text;
};

void __fastcall TXMLSubCategoryType::Set_name(UnicodeString Value)
{
  TXMLNode::SetAttribute(UnicodeString("name"), Value);
};

// TXMLProducersType 

void __fastcall TXMLProducersType::AfterConstruction(void)
{
  RegisterChildNode(UnicodeString("Producer"), __classid(TXMLProducerType));
  ItemTag = "Producer";
  ItemInterface = __uuidof(IXMLProducerType);
  TXMLNodeCollection::AfterConstruction();
};

_di_IXMLProducerType __fastcall TXMLProducersType::Get_Producer(int Index)
{
  return (_di_IXMLProducerType) TXMLNodeCollection::List->Nodes[Index];
};

_di_IXMLProducerType __fastcall TXMLProducersType::Add()
{
  return (_di_IXMLProducerType) AddItem(-1);
};

_di_IXMLProducerType __fastcall TXMLProducersType::Insert(const int Index)
{
  return (_di_IXMLProducerType) AddItem(Index);
};

// TXMLProducerType 

UnicodeString __fastcall TXMLProducerType::Get_id()
{
  return TXMLNode::AttributeNodes->Nodes[UnicodeString("id")]->Text;
};

void __fastcall TXMLProducerType::Set_id(UnicodeString Value)
{
  TXMLNode::SetAttribute(UnicodeString("id"), Value);
};

UnicodeString __fastcall TXMLProducerType::Get_name()
{
  return TXMLNode::AttributeNodes->Nodes[UnicodeString("name")]->Text;
};

void __fastcall TXMLProducerType::Set_name(UnicodeString Value)
{
  TXMLNode::SetAttribute(UnicodeString("name"), Value);
};

// TXMLProductsType 

void __fastcall TXMLProductsType::AfterConstruction(void)
{
  RegisterChildNode(UnicodeString("Product"), __classid(TXMLProductType));
  ItemTag = "Product";
  ItemInterface = __uuidof(IXMLProductType);
  TXMLNodeCollection::AfterConstruction();
};

_di_IXMLProductType __fastcall TXMLProductsType::Get_Product(int Index)
{
  return (_di_IXMLProductType) TXMLNodeCollection::List->Nodes[Index];
};

_di_IXMLProductType __fastcall TXMLProductsType::Add()
{
  return (_di_IXMLProductType) AddItem(-1);
};

_di_IXMLProductType __fastcall TXMLProductsType::Insert(const int Index)
{
  return (_di_IXMLProductType) AddItem(Index);
};

// TXMLProductType 

void __fastcall TXMLProductType::AfterConstruction(void)
{
  RegisterChildNode(UnicodeString("Images"), __classid(TXMLImagesType));
  RegisterChildNode(UnicodeString("Multimedia"), __classid(TXMLMultimediaType));
  RegisterChildNode(UnicodeString("TechnicalSpecification"), __classid(TXMLTechnicalSpecificationType));
  TXMLNode::AfterConstruction();
};

UnicodeString __fastcall TXMLProductType::Get_id()
{
  return TXMLNode::AttributeNodes->Nodes[UnicodeString("id")]->Text;
};

void __fastcall TXMLProductType::Set_id(UnicodeString Value)
{
  TXMLNode::SetAttribute(UnicodeString("id"), Value);
};

UnicodeString __fastcall TXMLProductType::Get_name()
{
  return TXMLNode::AttributeNodes->Nodes[UnicodeString("name")]->Text;
};

void __fastcall TXMLProductType::Set_name(UnicodeString Value)
{
  TXMLNode::SetAttribute(UnicodeString("name"), Value);
};

UnicodeString __fastcall TXMLProductType::Get_producer()
{
  return TXMLNode::AttributeNodes->Nodes[UnicodeString("producer")]->Text;
};

void __fastcall TXMLProductType::Set_producer(UnicodeString Value)
{
  TXMLNode::SetAttribute(UnicodeString("producer"), Value);
};

UnicodeString __fastcall TXMLProductType::Get_categoryId()
{
  return TXMLNode::AttributeNodes->Nodes[UnicodeString("categoryId")]->Text;
};

void __fastcall TXMLProductType::Set_categoryId(UnicodeString Value)
{
  TXMLNode::SetAttribute(UnicodeString("categoryId"), Value);
};

UnicodeString __fastcall TXMLProductType::Get_warranty()
{
  return TXMLNode::AttributeNodes->Nodes[UnicodeString("warranty")]->Text;
};

void __fastcall TXMLProductType::Set_warranty(UnicodeString Value)
{
  TXMLNode::SetAttribute(UnicodeString("warranty"), Value);
};

UnicodeString __fastcall TXMLProductType::Get_priceNet()
{
  return TXMLNode::AttributeNodes->Nodes[UnicodeString("priceNet")]->Text;
};

void __fastcall TXMLProductType::Set_priceNet(UnicodeString Value)
{
  TXMLNode::SetAttribute(UnicodeString("priceNet"), Value);
};

Integer __fastcall TXMLProductType::Get_vat()
{
  return TXMLNode::AttributeNodes->Nodes[UnicodeString("vat")]->NodeValue;
};

void __fastcall TXMLProductType::Set_vat(Integer Value)
{
  TXMLNode::SetAttribute(UnicodeString("vat"), Value);
};

UnicodeString __fastcall TXMLProductType::Get_vat_type()
{
  return TXMLNode::AttributeNodes->Nodes[UnicodeString("vat_type")]->Text;
};

void __fastcall TXMLProductType::Set_vat_type(UnicodeString Value)
{
  TXMLNode::SetAttribute(UnicodeString("vat_type"), Value);
};

UnicodeString __fastcall TXMLProductType::Get_pkwiu()
{
  return TXMLNode::AttributeNodes->Nodes[UnicodeString("pkwiu")]->Text;
};

void __fastcall TXMLProductType::Set_pkwiu(UnicodeString Value)
{
  TXMLNode::SetAttribute(UnicodeString("pkwiu"), Value);
};

UnicodeString __fastcall TXMLProductType::Get_externalWarehouse()
{
  return TXMLNode::AttributeNodes->Nodes[UnicodeString("externalWarehouse")]->Text;
};

void __fastcall TXMLProductType::Set_externalWarehouse(UnicodeString Value)
{
  TXMLNode::SetAttribute(UnicodeString("externalWarehouse"), Value);
};

Integer __fastcall TXMLProductType::Get_available()
{
  return TXMLNode::AttributeNodes->Nodes[UnicodeString("available")]->NodeValue;
};

void __fastcall TXMLProductType::Set_available(Integer Value)
{
  TXMLNode::SetAttribute(UnicodeString("available"), Value);
};

UnicodeString __fastcall TXMLProductType::Get_lastChange()
{
  return TXMLNode::AttributeNodes->Nodes[UnicodeString("lastChange")]->Text;
};

void __fastcall TXMLProductType::Set_lastChange(UnicodeString Value)
{
  TXMLNode::SetAttribute(UnicodeString("lastChange"), Value);
};

UnicodeString __fastcall TXMLProductType::Get_date()
{
  return TXMLNode::AttributeNodes->Nodes[UnicodeString("date")]->Text;
};

void __fastcall TXMLProductType::Set_date(UnicodeString Value)
{
  TXMLNode::SetAttribute(UnicodeString("date"), Value);
};

UnicodeString __fastcall TXMLProductType::Get_onOrder()
{
  return TXMLNode::AttributeNodes->Nodes[UnicodeString("onOrder")]->Text;
};

void __fastcall TXMLProductType::Set_onOrder(UnicodeString Value)
{
  TXMLNode::SetAttribute(UnicodeString("onOrder"), Value);
};

UnicodeString __fastcall TXMLProductType::Get_specialOffer()
{
  return TXMLNode::AttributeNodes->Nodes[UnicodeString("specialOffer")]->Text;
};

void __fastcall TXMLProductType::Set_specialOffer(UnicodeString Value)
{
  TXMLNode::SetAttribute(UnicodeString("specialOffer"), Value);
};

UnicodeString __fastcall TXMLProductType::Get_smallPallet()
{
  return TXMLNode::AttributeNodes->Nodes[UnicodeString("smallPallet")]->Text;
};

void __fastcall TXMLProductType::Set_smallPallet(UnicodeString Value)
{
  TXMLNode::SetAttribute(UnicodeString("smallPallet"), Value);
};

UnicodeString __fastcall TXMLProductType::Get_productIsLarge()
{
  return TXMLNode::AttributeNodes->Nodes[UnicodeString("productIsLarge")]->Text;
};

void __fastcall TXMLProductType::Set_productIsLarge(UnicodeString Value)
{
  TXMLNode::SetAttribute(UnicodeString("productIsLarge"), Value);
};

UnicodeString __fastcall TXMLProductType::Get_reported()
{
  return TXMLNode::AttributeNodes->Nodes[UnicodeString("reported")]->Text;
};

void __fastcall TXMLProductType::Set_reported(UnicodeString Value)
{
  TXMLNode::SetAttribute(UnicodeString("reported"), Value);
};

UnicodeString __fastcall TXMLProductType::Get_EAN()
{
  return TXMLNode::AttributeNodes->Nodes[UnicodeString("EAN")]->Text;
};

void __fastcall TXMLProductType::Set_EAN(UnicodeString Value)
{
  TXMLNode::SetAttribute(UnicodeString("EAN"), Value);
};

UnicodeString __fastcall TXMLProductType::Get_manufacturerPartNumber()
{
  return TXMLNode::AttributeNodes->Nodes[UnicodeString("manufacturerPartNumber")]->Text;
};

UnicodeString __fastcall TXMLProductType::Get_saleReason()
{
  return TXMLNode::AttributeNodes->Nodes[UnicodeString("saleReason")]->Text;
};

void __fastcall TXMLProductType::Set_manufacturerPartNumber(UnicodeString Value)
{
  TXMLNode::SetAttribute(UnicodeString("manufacturerPartNumber"), Value);
};

Integer __fastcall TXMLProductType::Get_sizeWidth()
{
  return TXMLNode::AttributeNodes->Nodes[UnicodeString("sizeWidth")]->NodeValue;
};

void __fastcall TXMLProductType::Set_sizeWidth(Integer Value)
{
  TXMLNode::SetAttribute(UnicodeString("sizeWidth"), Value);
};

Integer __fastcall TXMLProductType::Get_sizeLength()
{
  return TXMLNode::AttributeNodes->Nodes[UnicodeString("sizeLength")]->NodeValue;
};

void __fastcall TXMLProductType::Set_sizeLength(Integer Value)
{
  TXMLNode::SetAttribute(UnicodeString("sizeLength"), Value);
};

Integer __fastcall TXMLProductType::Get_sizeHeight()
{
  return TXMLNode::AttributeNodes->Nodes[UnicodeString("sizeHeight")]->NodeValue;
};

void __fastcall TXMLProductType::Set_sizeHeight(Integer Value)
{
  TXMLNode::SetAttribute(UnicodeString("sizeHeight"), Value);
};

Integer __fastcall TXMLProductType::Get_weight()
{
  return TXMLNode::AttributeNodes->Nodes[UnicodeString("weight")]->NodeValue;
};

void __fastcall TXMLProductType::Set_weight(Integer Value)
{
  TXMLNode::SetAttribute(UnicodeString("weight"), Value);
};

UnicodeString __fastcall TXMLProductType::Get_sizeMeasurementUnit()
{
  return TXMLNode::AttributeNodes->Nodes[UnicodeString("sizeMeasurementUnit")]->Text;
};

void __fastcall TXMLProductType::Set_sizeMeasurementUnit(UnicodeString Value)
{
  TXMLNode::SetAttribute(UnicodeString("sizeMeasurementUnit"), Value);
};

UnicodeString __fastcall TXMLProductType::Get_weightMeasurementUnit()
{
  return TXMLNode::AttributeNodes->Nodes[UnicodeString("weightMeasurementUnit")]->Text;
};

void __fastcall TXMLProductType::Set_weightMeasurementUnit(UnicodeString Value)
{
  TXMLNode::SetAttribute(UnicodeString("weightMeasurementUnit"), Value);
};

_di_IXMLImagesType __fastcall TXMLProductType::Get_Images()
{
  return (_di_IXMLImagesType) TXMLNode::ChildNodes->Nodes[UnicodeString("Images")];
};
_di_IXMLMultimediaType __fastcall TXMLProductType::Get_Multimedia()
{
  return (_di_IXMLMultimediaType) TXMLNode::ChildNodes->Nodes[UnicodeString("Multimedia")];
};

_di_IXMLTechnicalSpecificationType __fastcall TXMLProductType::Get_TechnicalSpecification()
{
  return (_di_IXMLTechnicalSpecificationType) TXMLNode::ChildNodes->Nodes[UnicodeString("TechnicalSpecification")];
};

// TXMLImagesType 

void __fastcall TXMLImagesType::AfterConstruction(void)
{
  RegisterChildNode(UnicodeString("Image"), __classid(TXMLImageType));
  ItemTag = "Image";
  ItemInterface = __uuidof(IXMLImageType);
  TXMLNodeCollection::AfterConstruction();
};

_di_IXMLImageType __fastcall TXMLImagesType::Get_Image(int Index)
{
  return (_di_IXMLImageType) TXMLNodeCollection::List->Nodes[Index];
};

_di_IXMLImageType __fastcall TXMLImagesType::Add()
{
  return (_di_IXMLImageType) AddItem(-1);
};

_di_IXMLImageType __fastcall TXMLImagesType::Insert(const int Index)
{
  return (_di_IXMLImageType) AddItem(Index);
};

// TXMLImageType 

UnicodeString __fastcall TXMLImageType::Get_url()
{
  return TXMLNode::AttributeNodes->Nodes[UnicodeString("url")]->Text;
};

void __fastcall TXMLImageType::Set_url(UnicodeString Value)
{
  TXMLNode::SetAttribute(UnicodeString("url"), Value);
};

Integer __fastcall TXMLImageType::Get_isMain()
{
  return TXMLNode::AttributeNodes->Nodes[UnicodeString("isMain")]->NodeValue;
};

void __fastcall TXMLImageType::Set_isMain(Integer Value)
{
  TXMLNode::SetAttribute(UnicodeString("isMain"), Value);
};

UnicodeString __fastcall TXMLImageType::Get_date()
{
  return TXMLNode::AttributeNodes->Nodes[UnicodeString("date")]->Text;
};

void __fastcall TXMLImageType::Set_date(UnicodeString Value)
{
  TXMLNode::SetAttribute(UnicodeString("date"), Value);
};

Integer __fastcall TXMLImageType::Get_copyright()
{
  return TXMLNode::AttributeNodes->Nodes[UnicodeString("copyright")]->NodeValue;
};

void __fastcall TXMLImageType::Set_copyright(Integer Value)
{
  TXMLNode::SetAttribute(UnicodeString("copyright"), Value);
};

// TXMLMultimediaType

void __fastcall TXMLMultimediaType::AfterConstruction(void)
{
  RegisterChildNode(UnicodeString("MultimediaItem"), __classid(TXMLMultimediaItemType));
  TXMLNode::AfterConstruction();
};

_di_IXMLMultimediaItemType __fastcall TXMLMultimediaType::Get_MultimediaItem()
{
  return (_di_IXMLMultimediaItemType) TXMLNode::ChildNodes->Nodes[UnicodeString("MultimediaItem")];
};

// TXMLMultimediaItemType

UnicodeString __fastcall TXMLMultimediaItemType::Get_url()
{
  return TXMLNode::AttributeNodes->Nodes[UnicodeString("url")]->Text;
};

void __fastcall TXMLMultimediaItemType::Set_url(UnicodeString Value)
{
  TXMLNode::SetAttribute(UnicodeString("url"), Value);
};

UnicodeString __fastcall TXMLMultimediaItemType::Get_description()
{
  return TXMLNode::AttributeNodes->Nodes[UnicodeString("description")]->Text;
};

void __fastcall TXMLMultimediaItemType::Set_description(UnicodeString Value)
{
  TXMLNode::SetAttribute(UnicodeString("description"), Value);
};

UnicodeString __fastcall TXMLMultimediaItemType::Get_type()
{
  return TXMLNode::AttributeNodes->Nodes[UnicodeString("type")]->Text;
};

void __fastcall TXMLMultimediaItemType::Set_type(UnicodeString Value)
{
  TXMLNode::SetAttribute(UnicodeString("type"), Value);
};

Integer __fastcall TXMLMultimediaItemType::Get_copyright()
{
  return TXMLNode::AttributeNodes->Nodes[UnicodeString("copyright")]->NodeValue;
};

void __fastcall TXMLMultimediaItemType::Set_copyright(Integer Value)
{
  TXMLNode::SetAttribute(UnicodeString("copyright"), Value);
};


// TXMLTechnicalSpecificationType 

void __fastcall TXMLTechnicalSpecificationType::AfterConstruction(void)
{
  RegisterChildNode(UnicodeString("Section"), __classid(TXMLSectionType));
  ItemTag = "Section";
  ItemInterface = __uuidof(IXMLSectionType);
  TXMLNodeCollection::AfterConstruction();
};

_di_IXMLSectionType __fastcall TXMLTechnicalSpecificationType::Get_Section(int Index)
{
  return (_di_IXMLSectionType) TXMLNodeCollection::List->Nodes[Index];
};

_di_IXMLSectionType __fastcall TXMLTechnicalSpecificationType::Add()
{
  return (_di_IXMLSectionType) AddItem(-1);
};

_di_IXMLSectionType __fastcall TXMLTechnicalSpecificationType::Insert(const int Index)
{
  return (_di_IXMLSectionType) AddItem(Index);
};

// TXMLSectionType 

void __fastcall TXMLSectionType::AfterConstruction(void)
{
  RegisterChildNode(UnicodeString("Attributes"), __classid(TXMLAttributesType));
  RegisterChildNode(UnicodeString("Parameters"), __classid(TXMLParametersType));
  TXMLNode::AfterConstruction();
};

UnicodeString __fastcall TXMLSectionType::Get_name()
{
  return TXMLNode::AttributeNodes->Nodes[UnicodeString("name")]->Text;
};

void __fastcall TXMLSectionType::Set_name(UnicodeString Value)
{
  TXMLNode::SetAttribute(UnicodeString("name"), Value);
};

_di_IXMLAttributesType __fastcall TXMLSectionType::Get_Attributes()
{
  return (_di_IXMLAttributesType) TXMLNode::ChildNodes->Nodes[UnicodeString("Attributes")];
};

_di_IXMLParametersType __fastcall TXMLSectionType::Get_Parameters()
{
  return (_di_IXMLParametersType) TXMLNode::ChildNodes->Nodes[UnicodeString("Parameters")];
};


// TXMLAttributesType 

void __fastcall TXMLAttributesType::AfterConstruction(void)
{
  RegisterChildNode(UnicodeString("Attribute"), __classid(TXMLAttributeType));
  ItemTag = "Attribute";
  ItemInterface = __uuidof(IXMLAttributeType);
  TXMLNodeCollection::AfterConstruction();
};

_di_IXMLAttributeType __fastcall TXMLAttributesType::Get_Attribute(int Index)
{
  return (_di_IXMLAttributeType) TXMLNodeCollection::List->Nodes[Index];
};

_di_IXMLAttributeType __fastcall TXMLAttributesType::Add()
{
  return (_di_IXMLAttributeType) AddItem(-1);
};

_di_IXMLAttributeType __fastcall TXMLAttributesType::Insert(const int Index)
{
  return (_di_IXMLAttributeType) AddItem(Index);
};

// TXMLAttributeType 

void __fastcall TXMLAttributeType::AfterConstruction(void)
{
  RegisterChildNode(UnicodeString("Values"), __classid(TXMLValuesType));
  TXMLNode::AfterConstruction();
};

UnicodeString __fastcall TXMLAttributeType::Get_name()
{
  return TXMLNode::AttributeNodes->Nodes[UnicodeString("name")]->Text;
};

void __fastcall TXMLAttributeType::Set_name(UnicodeString Value)
{
  TXMLNode::SetAttribute(UnicodeString("name"), Value);
};

_di_IXMLValuesType __fastcall TXMLAttributeType::Get_Values()
{
  return (_di_IXMLValuesType) TXMLNode::ChildNodes->Nodes[UnicodeString("Values")];
};

// TXMLValuesType 

void __fastcall TXMLValuesType::AfterConstruction(void)
{
  RegisterChildNode(UnicodeString("Value"), __classid(TXMLValueType));
  ItemTag = "Value";
  ItemInterface = __uuidof(IXMLValueType);
  TXMLNodeCollection::AfterConstruction();
};

_di_IXMLValueType __fastcall TXMLValuesType::Get_Value(int Index)
{
  return (_di_IXMLValueType) TXMLNodeCollection::List->Nodes[Index];
};

_di_IXMLValueType __fastcall TXMLValuesType::Add()
{
  return (_di_IXMLValueType) AddItem(-1);
};

_di_IXMLValueType __fastcall TXMLValuesType::Insert(const int Index)
{
  return (_di_IXMLValueType) AddItem(Index);
};

// TXMLValueType

UnicodeString __fastcall TXMLValueType::Get_Name()
{
  return TXMLNode::AttributeNodes->Nodes[UnicodeString("Name")]->Text;
};

void __fastcall TXMLValueType::Set_Name(UnicodeString Value)
{
  TXMLNode::SetAttribute(UnicodeString("Name"), Value);
};

// TXMLParametersType

void __fastcall TXMLParametersType::AfterConstruction(void)
{
  RegisterChildNode(UnicodeString("Parameter"), __classid(TXMLParameterType));
  ItemTag = "Parameter";
  ItemInterface = __uuidof(IXMLParameterType);
  TXMLNodeCollection::AfterConstruction();
};

_di_IXMLParameterType __fastcall TXMLParametersType::Get_Parameter(int Index)
{
  return (_di_IXMLParameterType) TXMLNodeCollection::List->Nodes[Index];
};

_di_IXMLParameterType __fastcall TXMLParametersType::Add()
{
  return (_di_IXMLParameterType) AddItem(-1);
};

_di_IXMLParameterType __fastcall TXMLParametersType::Insert(const int Index)
{
  return (_di_IXMLParameterType) AddItem(Index);
};

// TXMLParameterType

UnicodeString __fastcall TXMLParameterType::Get_name()
{
  return TXMLNode::AttributeNodes->Nodes[UnicodeString("name")]->Text;
};

void __fastcall TXMLParameterType::Set_name(UnicodeString Value)
{
  TXMLNode::SetAttribute(UnicodeString("name"), Value);
};

UnicodeString __fastcall TXMLParameterType::Get_value()
{
  return TXMLNode::AttributeNodes->Nodes[UnicodeString("value")]->Text;
};

void __fastcall TXMLParameterType::Set_value(UnicodeString Value)
{
  TXMLNode::SetAttribute(UnicodeString("value"), Value);
};
