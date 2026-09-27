#pragma once
// IWYU pragma private; include "Oculus/Interaction/TransformExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TransformExtensions)
namespace Oculus::Interaction {
class TransformExtensions___c__DisplayClass3_0;
}
namespace System {
template<typename T>
class Predicate_1;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction {
class TransformExtensions;
}
namespace Oculus::Interaction {
class TransformExtensions___c__DisplayClass3_0;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::TransformExtensions*);
MARK_REF_T(::Oculus::Interaction::TransformExtensions___c__DisplayClass3_0*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::TransformExtensions*, "Oculus.Interaction", "TransformExtensions");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::TransformExtensions___c__DisplayClass3_0*, "Oculus.Interaction", "TransformExtensions/<>c__DisplayClass3_0");
// [Extension]
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.TransformExtensions
class CORDL_TYPE TransformExtensions : public ::System::Object {
public:
// Declarations
using __c__DisplayClass3_0 = ::Oculus::Interaction::TransformExtensions___c__DisplayClass3_0;

/// [Extension]
/// @brief Method FindChildRecursive, addr 0xa402d0c, size 0xc4, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Transform> FindChildRecursive(::UnityEngine::Transform*  parent, ::StringW  name) ;

/// [Extension]
/// @brief Method FindChildRecursive, addr 0xa402dd8, size 0x328, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Transform> FindChildRecursive(::UnityEngine::Transform*  parent, ::System::Predicate_1<::UnityW<::UnityEngine::Transform>>*  predicate) ;

/// [Extension]
/// @brief Method InverseTransformPointUnscaled, addr 0xa402884, size 0x148, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 InverseTransformPointUnscaled(::UnityEngine::Transform*  transform, ::UnityEngine::Vector3  position) ;

/// [Extension]
/// @brief Method TransformBounds, addr 0xa402adc, size 0x230, virtual false, abstract: false, final false
static inline ::UnityEngine::Bounds TransformBounds(::UnityEngine::Transform*  transform, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Bounds>  bounds) ;

/// [Extension]
/// @brief Method TransformPointUnscaled, addr 0xa4029cc, size 0x110, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 TransformPointUnscaled(::UnityEngine::Transform*  transform, ::UnityEngine::Vector3  position) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransformExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransformExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TransformExtensions(TransformExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransformExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransformExtensions(TransformExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15707};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::TransformExtensions) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.TransformExtensions/<>c__DisplayClass3_0
class CORDL_TYPE TransformExtensions___c__DisplayClass3_0 : public ::System::Object {
public:
// Declarations
/// @brief Field name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

static inline ::Oculus::Interaction::TransformExtensions___c__DisplayClass3_0* New_ctor() ;

/// @brief Method <FindChildRecursive>b__0, addr 0xa403100, size 0x30, virtual false, abstract: false, final false
inline bool _FindChildRecursive_b__0(::UnityEngine::Transform*  child) ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

/// @brief Method .ctor, addr 0xa402dd0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransformExtensions___c__DisplayClass3_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransformExtensions___c__DisplayClass3_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TransformExtensions___c__DisplayClass3_0(TransformExtensions___c__DisplayClass3_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransformExtensions___c__DisplayClass3_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransformExtensions___c__DisplayClass3_0(TransformExtensions___c__DisplayClass3_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15706};

/// @brief Field name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___name;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::TransformExtensions___c__DisplayClass3_0, ___name) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::TransformExtensions___c__DisplayClass3_0) == 0x18, "Size mismatch!");

} // namespace end def Oculus::Interaction
