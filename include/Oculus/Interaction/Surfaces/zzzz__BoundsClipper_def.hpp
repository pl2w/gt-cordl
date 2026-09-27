#pragma once
// IWYU pragma private; include "Oculus/Interaction/Surfaces/BoundsClipper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(BoundsClipper)
namespace Oculus::Interaction::Surfaces {
class IBoundsClipper;
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
namespace Oculus::Interaction::Surfaces {
class BoundsClipper;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Surfaces::BoundsClipper*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Surfaces::BoundsClipper*, "Oculus.Interaction.Surfaces", "BoundsClipper");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Oculus::Interaction::Surfaces {
// Is value type: false
// CS Name: Oculus.Interaction.Surfaces.BoundsClipper
class CORDL_TYPE BoundsClipper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Position, put=set_Position)) ::UnityEngine::Vector3  Position;

 __declspec(property(get=get_Size, put=set_Size)) ::UnityEngine::Vector3  Size;

/// @brief Field _position, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get__position, put=__cordl_internal_set__position)) ::UnityEngine::Vector3  _position;

/// @brief Field _size, offset 0x2c, size 0xc 
 __declspec(property(get=__cordl_internal_get__size, put=__cordl_internal_set__size)) ::UnityEngine::Vector3  _size;

/// @brief Convert operator to "::Oculus::Interaction::Surfaces::IBoundsClipper"
constexpr operator  ::Oculus::Interaction::Surfaces::IBoundsClipper*() noexcept;

/// @brief Method GetLocalBounds, addr 0xa4b3210, size 0xc4, virtual true, abstract: false, final true
inline bool GetLocalBounds(::UnityEngine::Transform*  localTo, ::by_ref<::UnityEngine::Bounds>  bounds) ;

static inline ::Oculus::Interaction::Surfaces::BoundsClipper* New_ctor() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__position() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__position() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__size() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__size() ;

constexpr void __cordl_internal_set__position(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__size(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0xa4b32d4, size 0x94, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Position, addr 0xa4b31e0, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_Position() ;

/// @brief Method get_Size, addr 0xa4b31f8, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_Size() ;

/// @brief Convert to "::Oculus::Interaction::Surfaces::IBoundsClipper"
constexpr ::Oculus::Interaction::Surfaces::IBoundsClipper* i___Oculus__Interaction__Surfaces__IBoundsClipper() noexcept;

/// @brief Method set_Position, addr 0xa4b31ec, size 0xc, virtual false, abstract: false, final false
inline void set_Position(::UnityEngine::Vector3  value) ;

/// @brief Method set_Size, addr 0xa4b3204, size 0xc, virtual false, abstract: false, final false
inline void set_Size(::UnityEngine::Vector3  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BoundsClipper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BoundsClipper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BoundsClipper(BoundsClipper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoundsClipper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoundsClipper(BoundsClipper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16215};

/// [Tooltip("The offset of the bounding box center relative to the transform origin, in local space.")]
/// [SerializeField]
/// @brief Field _position, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____position;

/// [Tooltip("The size of the bounding box in local space.")]
/// [SerializeField]
/// @brief Field _size, offset: 0x2c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____size;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Surfaces::BoundsClipper, ____position) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Surfaces::BoundsClipper, ____size) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Surfaces::BoundsClipper) == 0x38, "Size mismatch!");

} // namespace end def Oculus::Interaction::Surfaces
