#pragma once
// IWYU pragma private; include "Liv/Lck/UI/LckIconRotator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LckIconRotator)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Liv::Lck::UI {
class LckIconRotator;
}
// Write type traits
MARK_REF_T(::Liv::Lck::UI::LckIconRotator*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::UI::LckIconRotator*, "Liv.Lck.UI", "LckIconRotator");
// Dependencies UnityEngine.MonoBehaviour
namespace Liv::Lck::UI {
// Is value type: false
// CS Name: Liv.Lck.UI.LckIconRotator
class CORDL_TYPE LckIconRotator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _iconTransform, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__iconTransform, put=__cordl_internal_set__iconTransform)) ::UnityW<::UnityEngine::Transform>  _iconTransform;

/// @brief Field _rotationOffset, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__rotationOffset, put=__cordl_internal_set__rotationOffset)) float_t  _rotationOffset;

static inline ::Liv::Lck::UI::LckIconRotator* New_ctor() ;

/// @brief Method Rotate, addr 0x9d50be8, size 0x40, virtual false, abstract: false, final false
inline void Rotate() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__iconTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__iconTransform() ;

constexpr float_t const& __cordl_internal_get__rotationOffset() const;

constexpr float_t& __cordl_internal_get__rotationOffset() ;

constexpr void __cordl_internal_set__iconTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__rotationOffset(float_t  value) ;

/// @brief Method .ctor, addr 0x9d50c28, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckIconRotator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckIconRotator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckIconRotator(LckIconRotator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckIconRotator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckIconRotator(LckIconRotator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24919};

/// [SerializeField]
/// @brief Field _rotationOffset, offset: 0x20, size: 0x4, def value: None
 float_t  ____rotationOffset;

/// [SerializeField]
/// @brief Field _iconTransform, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____iconTransform;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::UI::LckIconRotator, ____rotationOffset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckIconRotator, ____iconTransform) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::UI::LckIconRotator) == 0x30, "Size mismatch!");

} // namespace end def Liv::Lck::UI
