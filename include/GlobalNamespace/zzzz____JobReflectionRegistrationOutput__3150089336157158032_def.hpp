#pragma once
// IWYU pragma private; include "GlobalNamespace/__JobReflectionRegistrationOutput__3150089336157158032.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(__JobReflectionRegistrationOutput__3150089336157158032)
// Forward declare root types
namespace GlobalNamespace {
class __JobReflectionRegistrationOutput__3150089336157158032;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::__JobReflectionRegistrationOutput__3150089336157158032*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::__JobReflectionRegistrationOutput__3150089336157158032*, "", "__JobReflectionRegistrationOutput__3150089336157158032");
// [DOTSCompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: __JobReflectionRegistrationOutput__3150089336157158032
class CORDL_TYPE __JobReflectionRegistrationOutput__3150089336157158032 : public ::System::Object {
public:
// Declarations
/// @brief Method CreateJobReflectionData, addr 0x55e2350, size 0x134, virtual false, abstract: false, final false
static inline void CreateJobReflectionData() ;

/// [RuntimeInitializeOnLoadMethod((UnityEngine.RuntimeInitializeLoadType)2)]
/// @brief Method EarlyInit, addr 0x55e2484, size 0x4, virtual false, abstract: false, final false
static inline void EarlyInit() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __JobReflectionRegistrationOutput__3150089336157158032() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__JobReflectionRegistrationOutput__3150089336157158032", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
__JobReflectionRegistrationOutput__3150089336157158032(__JobReflectionRegistrationOutput__3150089336157158032 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__JobReflectionRegistrationOutput__3150089336157158032", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
__JobReflectionRegistrationOutput__3150089336157158032(__JobReflectionRegistrationOutput__3150089336157158032 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27793};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::__JobReflectionRegistrationOutput__3150089336157158032) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
