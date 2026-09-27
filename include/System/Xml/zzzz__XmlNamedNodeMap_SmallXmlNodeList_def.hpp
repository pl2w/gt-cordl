#pragma once
// IWYU pragma private; include "System/Xml/XmlNamedNodeMap_SmallXmlNodeList.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlNamedNodeMap_SmallXmlNodeList)
namespace System::Collections {
class IEnumerator;
}
namespace System::Xml {
class SmallXmlNodeList_XmlNamedNodeMap_SingleObjectEnumerator;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct XmlNamedNodeMap_SmallXmlNodeList;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XmlNamedNodeMap_SmallXmlNodeList);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XmlNamedNodeMap_SmallXmlNodeList, "System.Xml", "XmlNamedNodeMap/SmallXmlNodeList");
// [DefaultMember("Item")]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Xml.XmlNamedNodeMap/SmallXmlNodeList
struct CORDL_TYPE XmlNamedNodeMap_SmallXmlNodeList {
public:
// Declarations
using SingleObjectEnumerator = ::System::Xml::SmallXmlNodeList_XmlNamedNodeMap_SingleObjectEnumerator;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Item)) ::System::Object*  Item[];

/// @brief Method Add, addr 0xabda16c, size 0x12c, virtual false, abstract: false, final false
inline void Add(::System::Object*  value) ;

/// @brief Method GetEnumerator, addr 0xabda068, size 0x104, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* GetEnumerator() ;

/// @brief Method Insert, addr 0xabda380, size 0x1a8, virtual false, abstract: false, final false
inline void Insert(int32_t  index, ::System::Object*  value) ;

/// @brief Method RemoveAt, addr 0xabda298, size 0xe8, virtual false, abstract: false, final false
inline void RemoveAt(int32_t  index) ;

/// @brief Method get_Count, addr 0xabcb7a0, size 0x8c, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_Item, addr 0xabcb5b4, size 0xdc, virtual false, abstract: false, final false
inline ::System::Object* get_Item(int32_t  index) ;

// Ctor Parameters []
// @brief default ctor
constexpr XmlNamedNodeMap_SmallXmlNodeList() ;

// Ctor Parameters [CppParam { name: "field", ty: "::System::Object*", modifiers: "", def_value: None, comment: None }]
constexpr XmlNamedNodeMap_SmallXmlNodeList(::System::Object*  field) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14128};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field field, offset: 0x0, size: 0x8, def value: None
 ::System::Object*  field;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XmlNamedNodeMap_SmallXmlNodeList, field) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XmlNamedNodeMap_SmallXmlNodeList) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
