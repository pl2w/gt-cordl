#pragma once
// IWYU pragma private; include "GlobalNamespace/UberShaderProperty.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderPropertyFlags_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderPropertyType_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UberShaderProperty)
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class UberShaderProperty;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::UberShaderProperty*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UberShaderProperty*, "", "UberShaderProperty");
// Dependencies System.Object, UnityEngine.Rendering.ShaderPropertyFlags, UnityEngine.Rendering.ShaderPropertyType, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: false
// CS Name: UberShaderProperty
class CORDL_TYPE UberShaderProperty : public ::System::Object {
public:
// Declarations
/// @brief Field attributes, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_attributes, put=__cordl_internal_set_attributes)) ::ArrayW<::StringW>  attributes;

/// @brief Field flags, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_flags, put=__cordl_internal_set_flags)) ::UnityEngine::Rendering::ShaderPropertyFlags  flags;

/// @brief Field index, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_index, put=__cordl_internal_set_index)) int32_t  index;

/// @brief Field isKeywordToggle, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_isKeywordToggle, put=__cordl_internal_set_isKeywordToggle)) bool  isKeywordToggle;

/// @brief Field keyword, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_keyword, put=__cordl_internal_set_keyword)) ::StringW  keyword;

/// @brief Field name, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

/// @brief Field nameID, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_nameID, put=__cordl_internal_set_nameID)) int32_t  nameID;

/// @brief Field rangeLimits, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_rangeLimits, put=__cordl_internal_set_rangeLimits)) ::UnityEngine::Vector2  rangeLimits;

/// @brief Field type, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_type, put=__cordl_internal_set_type)) ::UnityEngine::Rendering::ShaderPropertyType  type;

/// @brief Method Disable, addr 0x5991ca8, size 0x8c, virtual false, abstract: false, final false
inline void Disable(::UnityEngine::Material*  target) ;

/// @brief Method Enable, addr 0x5991c1c, size 0x8c, virtual false, abstract: false, final false
inline void Enable(::UnityEngine::Material*  target) ;

/// @brief Method GetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T GetValue(::UnityEngine::Material*  target) ;

static inline ::GlobalNamespace::UberShaderProperty* New_ctor() ;

/// @brief Method SetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetValue(::UnityEngine::Material*  target, T  value) ;

/// @brief Method TryGetKeywordState, addr 0x5991d34, size 0x50, virtual false, abstract: false, final false
inline bool TryGetKeywordState(::UnityEngine::Material*  target, ::by_ref<bool>  enabled) ;

/// @brief Method ValueAs, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TIn,typename TOut>
static inline TOut ValueAs(TIn  value) ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_attributes() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_attributes() ;

constexpr ::UnityEngine::Rendering::ShaderPropertyFlags const& __cordl_internal_get_flags() const;

constexpr ::UnityEngine::Rendering::ShaderPropertyFlags& __cordl_internal_get_flags() ;

constexpr int32_t const& __cordl_internal_get_index() const;

constexpr int32_t& __cordl_internal_get_index() ;

constexpr bool const& __cordl_internal_get_isKeywordToggle() const;

constexpr bool& __cordl_internal_get_isKeywordToggle() ;

constexpr ::StringW const& __cordl_internal_get_keyword() const;

constexpr ::StringW& __cordl_internal_get_keyword() ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr int32_t const& __cordl_internal_get_nameID() const;

constexpr int32_t& __cordl_internal_get_nameID() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_rangeLimits() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_rangeLimits() ;

constexpr ::UnityEngine::Rendering::ShaderPropertyType const& __cordl_internal_get_type() const;

constexpr ::UnityEngine::Rendering::ShaderPropertyType& __cordl_internal_get_type() ;

constexpr void __cordl_internal_set_attributes(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_flags(::UnityEngine::Rendering::ShaderPropertyFlags  value) ;

constexpr void __cordl_internal_set_index(int32_t  value) ;

constexpr void __cordl_internal_set_isKeywordToggle(bool  value) ;

constexpr void __cordl_internal_set_keyword(::StringW  value) ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

constexpr void __cordl_internal_set_nameID(int32_t  value) ;

constexpr void __cordl_internal_set_rangeLimits(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_type(::UnityEngine::Rendering::ShaderPropertyType  value) ;

/// @brief Method .ctor, addr 0x59906f0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UberShaderProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UberShaderProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UberShaderProperty(UberShaderProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UberShaderProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UberShaderProperty(UberShaderProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2578};

/// @brief Field index, offset: 0x10, size: 0x4, def value: None
 int32_t  ___index;

/// @brief Field nameID, offset: 0x14, size: 0x4, def value: None
 int32_t  ___nameID;

/// @brief Field name, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___name;

/// @brief Field type, offset: 0x20, size: 0x4, def value: None
 ::UnityEngine::Rendering::ShaderPropertyType  ___type;

/// @brief Field flags, offset: 0x24, size: 0x4, def value: None
 ::UnityEngine::Rendering::ShaderPropertyFlags  ___flags;

/// @brief Field rangeLimits, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___rangeLimits;

/// @brief Field attributes, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___attributes;

/// @brief Field isKeywordToggle, offset: 0x38, size: 0x1, def value: None
 bool  ___isKeywordToggle;

/// @brief Field keyword, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___keyword;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UberShaderProperty, ___index) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderProperty, ___nameID) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderProperty, ___name) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderProperty, ___type) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderProperty, ___flags) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderProperty, ___rangeLimits) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderProperty, ___attributes) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderProperty, ___isKeywordToggle) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderProperty, ___keyword) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UberShaderProperty) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
