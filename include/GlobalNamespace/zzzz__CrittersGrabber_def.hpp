#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersGrabber.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CrittersActor_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CrittersGrabber)
namespace GlobalNamespace {
class CrittersActor;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class CrittersGrabber;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CrittersGrabber*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CrittersGrabber*, "", "CrittersGrabber");
// Dependencies CrittersActor
namespace GlobalNamespace {
// Is value type: false
// CS Name: CrittersGrabber
class CORDL_TYPE CrittersGrabber : public ::GlobalNamespace::CrittersActor {
public:
// Declarations
/// @brief Field grabDistance, offset 0x194, size 0x4 
 __declspec(property(get=__cordl_internal_get_grabDistance, put=__cordl_internal_set_grabDistance)) float_t  grabDistance;

/// @brief Field grabPosition, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get_grabPosition, put=__cordl_internal_set_grabPosition)) ::UnityW<::UnityEngine::Transform>  grabPosition;

/// @brief Field grabbedActors, offset 0x198, size 0x8 
 __declspec(property(get=__cordl_internal_get_grabbedActors, put=__cordl_internal_set_grabbedActors)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*  grabbedActors;

/// @brief Field grabbing, offset 0x190, size 0x1 
 __declspec(property(get=__cordl_internal_get_grabbing, put=__cordl_internal_set_grabbing)) bool  grabbing;

/// @brief Field isLeft, offset 0x1a0, size 0x1 
 __declspec(property(get=__cordl_internal_get_isLeft, put=__cordl_internal_set_isLeft)) bool  isLeft;

static inline ::GlobalNamespace::CrittersGrabber* New_ctor() ;

/// @brief Method ProcessLocal, addr 0x55ff240, size 0x88, virtual true, abstract: false, final false
inline bool ProcessLocal() ;

/// @brief Method ProcessRemote, addr 0x55ff1b8, size 0x88, virtual true, abstract: false, final false
inline void ProcessRemote() ;

constexpr float_t const& __cordl_internal_get_grabDistance() const;

constexpr float_t& __cordl_internal_get_grabDistance() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_grabPosition() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_grabPosition() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>* const& __cordl_internal_get_grabbedActors() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*& __cordl_internal_get_grabbedActors() ;

constexpr bool const& __cordl_internal_get_grabbing() const;

constexpr bool& __cordl_internal_get_grabbing() ;

constexpr bool const& __cordl_internal_get_isLeft() const;

constexpr bool& __cordl_internal_get_isLeft() ;

constexpr void __cordl_internal_set_grabDistance(float_t  value) ;

constexpr void __cordl_internal_set_grabPosition(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_grabbedActors(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*  value) ;

constexpr void __cordl_internal_set_grabbing(bool  value) ;

constexpr void __cordl_internal_set_isLeft(bool  value) ;

/// @brief Method .ctor, addr 0x55ff2c8, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CrittersGrabber() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CrittersGrabber", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CrittersGrabber(CrittersGrabber && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrittersGrabber", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrittersGrabber(CrittersGrabber const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{99};

/// @brief Field grabPosition, offset: 0x188, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___grabPosition;

/// @brief Field grabbing, offset: 0x190, size: 0x1, def value: None
 bool  ___grabbing;

/// @brief Field grabDistance, offset: 0x194, size: 0x4, def value: None
 float_t  ___grabDistance;

/// @brief Field grabbedActors, offset: 0x198, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*  ___grabbedActors;

/// @brief Field isLeft, offset: 0x1a0, size: 0x1, def value: None
 bool  ___isLeft;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CrittersGrabber, ___grabPosition) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersGrabber, ___grabbing) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersGrabber, ___grabDistance) == 0x194, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersGrabber, ___grabbedActors) == 0x198, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersGrabber, ___isLeft) == 0x1a0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CrittersGrabber) == 0x1a8, "Size mismatch!");

} // namespace end def GlobalNamespace
