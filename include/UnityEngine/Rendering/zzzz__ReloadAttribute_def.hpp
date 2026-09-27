#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ReloadAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReloadAttribute)
namespace GlobalNamespace {
struct ReloadAttribute_Package;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class ReloadAttribute;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::ReloadAttribute*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::ReloadAttribute*, "UnityEngine.Rendering", "ReloadAttribute");
// [AttributeUsage((System.AttributeTargets)256)]
// Dependencies System.Attribute
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ReloadAttribute
class CORDL_TYPE ReloadAttribute : public ::System::Attribute {
public:
// Declarations
using Package = ::GlobalNamespace::ReloadAttribute_Package;

static inline ::UnityEngine::Rendering::ReloadAttribute* New_ctor(::StringW  path, ::GlobalNamespace::ReloadAttribute_Package  package) ;

static inline ::UnityEngine::Rendering::ReloadAttribute* New_ctor(::StringW  pathFormat, int32_t  rangeMin, int32_t  rangeMax, ::GlobalNamespace::ReloadAttribute_Package  package) ;

static inline ::UnityEngine::Rendering::ReloadAttribute* New_ctor(::ArrayW<::StringW>  paths, ::GlobalNamespace::ReloadAttribute_Package  package) ;

/// @brief Method .ctor, addr 0xb125c30, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::StringW  path, ::GlobalNamespace::ReloadAttribute_Package  package) ;

/// @brief Method .ctor, addr 0xb125cb0, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::StringW  pathFormat, int32_t  rangeMin, int32_t  rangeMax, ::GlobalNamespace::ReloadAttribute_Package  package) ;

/// @brief Method .ctor, addr 0xb125c28, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<::StringW>  paths, ::GlobalNamespace::ReloadAttribute_Package  package) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReloadAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReloadAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReloadAttribute(ReloadAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReloadAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReloadAttribute(ReloadAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16652};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::ReloadAttribute) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
