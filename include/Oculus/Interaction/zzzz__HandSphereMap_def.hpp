#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandSphereMap.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__HandSphere_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HandSphereMap)
namespace Oculus::Interaction::Input {
class FromHandPrefabDataSource;
}
namespace Oculus::Interaction::Input {
struct HandJointId;
}
namespace Oculus::Interaction::Input {
struct Handedness;
}
namespace Oculus::Interaction {
struct HandSphere;
}
namespace Oculus::Interaction {
class IHandSphereMap;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace Oculus::Interaction {
class HandSphereMap;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::HandSphereMap*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::HandSphereMap*, "Oculus.Interaction", "HandSphereMap");
// Dependencies Oculus.Interaction.HandSphere, System.Collections.Generic.List`1<T>, UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.HandSphereMap
class CORDL_TYPE HandSphereMap : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _handPrefabDataSource, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__handPrefabDataSource, put=__cordl_internal_set__handPrefabDataSource)) ::UnityW<::Oculus::Interaction::Input::FromHandPrefabDataSource>  _handPrefabDataSource;

/// @brief Field _sourceSphereMap, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__sourceSphereMap, put=__cordl_internal_set__sourceSphereMap)) ::ArrayW<::System::Collections::Generic::List_1<::Oculus::Interaction::HandSphere>*>  _sourceSphereMap;

/// @brief Convert operator to "::Oculus::Interaction::IHandSphereMap"
constexpr operator  ::Oculus::Interaction::IHandSphereMap*() noexcept;

/// @brief Method Awake, addr 0xa464fd8, size 0xe0, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method GetSpheres, addr 0xa46557c, size 0x228, virtual true, abstract: false, final true
inline void GetSpheres(::Oculus::Interaction::Input::Handedness  handedness, ::Oculus::Interaction::Input::HandJointId  jointId, ::UnityEngine::Pose  jointPose, float_t  scale, ::System::Collections::Generic::List_1<::Oculus::Interaction::HandSphere>*  spheres) ;

static inline ::Oculus::Interaction::HandSphereMap* New_ctor() ;

/// @brief Method Start, addr 0xa4650b8, size 0x4b4, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::Oculus::Interaction::Input::FromHandPrefabDataSource> const& __cordl_internal_get__handPrefabDataSource() const;

constexpr ::UnityW<::Oculus::Interaction::Input::FromHandPrefabDataSource>& __cordl_internal_get__handPrefabDataSource() ;

constexpr ::ArrayW<::System::Collections::Generic::List_1<::Oculus::Interaction::HandSphere>*> const& __cordl_internal_get__sourceSphereMap() const;

constexpr ::ArrayW<::System::Collections::Generic::List_1<::Oculus::Interaction::HandSphere>*>& __cordl_internal_get__sourceSphereMap() ;

constexpr void __cordl_internal_set__handPrefabDataSource(::UnityW<::Oculus::Interaction::Input::FromHandPrefabDataSource>  value) ;

constexpr void __cordl_internal_set__sourceSphereMap(::ArrayW<::System::Collections::Generic::List_1<::Oculus::Interaction::HandSphere>*>  value) ;

/// @brief Method .ctor, addr 0xa4657a4, size 0x64, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Oculus::Interaction::IHandSphereMap"
constexpr ::Oculus::Interaction::IHandSphereMap* i___Oculus__Interaction__IHandSphereMap() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandSphereMap() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandSphereMap", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandSphereMap(HandSphereMap && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandSphereMap", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandSphereMap(HandSphereMap const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15885};

/// [SerializeField]
/// @brief Field _handPrefabDataSource, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::Input::FromHandPrefabDataSource>  ____handPrefabDataSource;

/// @brief Field _sourceSphereMap, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::System::Collections::Generic::List_1<::Oculus::Interaction::HandSphere>*>  ____sourceSphereMap;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::HandSphereMap, ____handPrefabDataSource) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandSphereMap, ____sourceSphereMap) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::HandSphereMap) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction
