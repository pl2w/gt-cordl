#pragma once
// IWYU pragma private; include "GlobalNamespace/MB_TexArrayForProperty.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MB_TextureArrayReference_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MB_TexArrayForProperty)
namespace GlobalNamespace {
class MB_TextureArrayReference;
}
// Forward declare root types
namespace GlobalNamespace {
class MB_TexArrayForProperty;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MB_TexArrayForProperty*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MB_TexArrayForProperty*, "", "MB_TexArrayForProperty");
// Dependencies MB_TextureArrayReference, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MB_TexArrayForProperty
class CORDL_TYPE MB_TexArrayForProperty : public ::System::Object {
public:
// Declarations
/// @brief Field formats, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_formats, put=__cordl_internal_set_formats)) ::ArrayW<::GlobalNamespace::MB_TextureArrayReference*>  formats;

/// @brief Field texPropertyName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_texPropertyName, put=__cordl_internal_set_texPropertyName)) ::StringW  texPropertyName;

static inline ::GlobalNamespace::MB_TexArrayForProperty* New_ctor(::StringW  name, ::ArrayW<::GlobalNamespace::MB_TextureArrayReference*>  texRefs) ;

constexpr ::ArrayW<::GlobalNamespace::MB_TextureArrayReference*> const& __cordl_internal_get_formats() const;

constexpr ::ArrayW<::GlobalNamespace::MB_TextureArrayReference*>& __cordl_internal_get_formats() ;

constexpr ::StringW const& __cordl_internal_get_texPropertyName() const;

constexpr ::StringW& __cordl_internal_get_texPropertyName() ;

constexpr void __cordl_internal_set_formats(::ArrayW<::GlobalNamespace::MB_TextureArrayReference*>  value) ;

constexpr void __cordl_internal_set_texPropertyName(::StringW  value) ;

/// @brief Method .ctor, addr 0x9d72934, size 0x98, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, ::ArrayW<::GlobalNamespace::MB_TextureArrayReference*>  texRefs) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB_TexArrayForProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB_TexArrayForProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB_TexArrayForProperty(MB_TexArrayForProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB_TexArrayForProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB_TexArrayForProperty(MB_TexArrayForProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22554};

/// @brief Field texPropertyName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___texPropertyName;

/// [NonReorderable]
/// @brief Field formats, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::MB_TextureArrayReference*>  ___formats;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MB_TexArrayForProperty, ___texPropertyName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB_TexArrayForProperty, ___formats) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MB_TexArrayForProperty) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
