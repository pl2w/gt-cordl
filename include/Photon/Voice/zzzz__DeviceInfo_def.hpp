#pragma once
// IWYU pragma private; include "Photon/Voice/DeviceInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DeviceInfo)
namespace System {
class Object;
}
// Forward declare root types
namespace Photon::Voice {
struct DeviceInfo;
}
// Write type traits
MARK_VAL_T(::Photon::Voice::DeviceInfo);
DEFINE_IL2CPP_CLASS(::Photon::Voice::DeviceInfo, "Photon.Voice", "DeviceInfo");
// Dependencies 
namespace Photon::Voice {
// Is value type: true
// CS Name: Photon.Voice.DeviceInfo
struct CORDL_TYPE DeviceInfo {
public:
// Declarations
/// @brief Field Default, offset 0xffffffff, size 0x20 
 __declspec(property(get=getStaticF_Default, put=setStaticF_Default)) ::Photon::Voice::DeviceInfo  Default;

 __declspec(property(get=get_IDInt, put=set_IDInt)) int32_t  IDInt;

 __declspec(property(get=get_IDString, put=set_IDString)) ::StringW  IDString;

 __declspec(property(get=get_IsDefault, put=set_IsDefault)) bool  IsDefault;

 __declspec(property(get=get_Name, put=set_Name)) ::StringW  Name;

/// @brief Method Equals, addr 0xa745d70, size 0x78, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode, addr 0xa745e7c, size 0x64, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0xa745ee0, size 0x20c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0xa745b84, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::StringW  id, ::StringW  name) ;

/// @brief Method .ctor, addr 0xa745ae4, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(int32_t  id, ::StringW  name) ;

/// @brief Method .ctor, addr 0xa745a44, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(bool  isDefault, int32_t  idInt, ::StringW  idString, ::StringW  name) ;

/// @brief Method .ctor, addr 0xa745c14, size 0x8c, virtual false, abstract: false, final false
inline void _ctor(::StringW  name) ;

static inline ::Photon::Voice::DeviceInfo getStaticF_Default() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_IDInt, addr 0xa745cb0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_IDInt() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_IDString, addr 0xa745cc0, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_IDString() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_IsDefault, addr 0xa745ca0, size 0x8, virtual false, abstract: false, final false
inline bool get_IsDefault() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Name, addr 0xa745cd0, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method op_Equality, addr 0xa745ce0, size 0x90, virtual false, abstract: false, final false
static inline bool op_Equality(::Photon::Voice::DeviceInfo  d1, ::Photon::Voice::DeviceInfo  d2) ;

/// @brief Method op_Inequality, addr 0xa745de8, size 0x94, virtual false, abstract: false, final false
static inline bool op_Inequality(::Photon::Voice::DeviceInfo  d1, ::Photon::Voice::DeviceInfo  d2) ;

static inline void setStaticF_Default(::Photon::Voice::DeviceInfo  value) ;

/// [CompilerGenerated]
/// @brief Method set_IDInt, addr 0xa745cb8, size 0x8, virtual false, abstract: false, final false
inline void set_IDInt(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_IDString, addr 0xa745cc8, size 0x8, virtual false, abstract: false, final false
inline void set_IDString(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsDefault, addr 0xa745ca8, size 0x8, virtual false, abstract: false, final false
inline void set_IsDefault(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_Name, addr 0xa745cd8, size 0x8, virtual false, abstract: false, final false
inline void set_Name(::StringW  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr DeviceInfo() ;

// Ctor Parameters [CppParam { name: "_IsDefault_k__BackingField", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_IDInt_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_IDString_k__BackingField", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Name_k__BackingField", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "useStringID", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr DeviceInfo(bool  _IsDefault_k__BackingField, int32_t  _IDInt_k__BackingField, ::StringW  _IDString_k__BackingField, ::StringW  _Name_k__BackingField, bool  useStringID) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28401};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// [CompilerGenerated]
/// @brief Field <IsDefault>k__BackingField, offset: 0x0, size: 0x1, def value: None
 bool  _IsDefault_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IDInt>k__BackingField, offset: 0x4, size: 0x4, def value: None
 int32_t  _IDInt_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IDString>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::StringW  _IDString_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Name>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  _Name_k__BackingField;

/// @brief Field useStringID, offset: 0x18, size: 0x1, def value: None
 bool  useStringID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::DeviceInfo, _IsDefault_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::DeviceInfo, _IDInt_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::DeviceInfo, _IDString_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::DeviceInfo, _Name_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::DeviceInfo, useStringID) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::DeviceInfo) == 0x20, "Size mismatch!");

} // namespace end def Photon::Voice
