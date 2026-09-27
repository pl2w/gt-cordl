#pragma once
// IWYU pragma private; include "GlobalNamespace/Member.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(Member)
// Forward declare root types
namespace GlobalNamespace {
struct Member;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Member);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Member, "", "Member");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Member
struct CORDL_TYPE Member {
public:
// Declarations
 __declspec(property(get=get_logoImage, put=set_logoImage)) ::StringW  logoImage;

 __declspec(property(get=get_name, put=set_name)) ::StringW  name;

 __declspec(property(get=get_profileImage, put=set_profileImage)) ::StringW  profileImage;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_logoImage, addr 0x57791f4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_logoImage() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_name, addr 0x57791e4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_name() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_profileImage, addr 0x5779204, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_profileImage() ;

/// [CompilerGenerated]
/// @brief Method set_logoImage, addr 0x57791fc, size 0x8, virtual false, abstract: false, final false
inline void set_logoImage(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_name, addr 0x57791ec, size 0x8, virtual false, abstract: false, final false
inline void set_name(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_profileImage, addr 0x577920c, size 0x8, virtual false, abstract: false, final false
inline void set_profileImage(::StringW  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Member() ;

// Ctor Parameters [CppParam { name: "_name_k__BackingField", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "_logoImage_k__BackingField", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "_profileImage_k__BackingField", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr Member(::StringW  _name_k__BackingField, ::StringW  _logoImage_k__BackingField, ::StringW  _profileImage_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1389};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// [CompilerGenerated]
/// @brief Field <name>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::StringW  _name_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <logoImage>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::StringW  _logoImage_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <profileImage>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  _profileImage_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Member, _name_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Member, _logoImage_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Member, _profileImage_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Member) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
