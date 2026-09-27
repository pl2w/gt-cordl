#pragma once
// IWYU pragma private; include "Oculus/Interaction/AutoMoveTowardsTargetProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__PoseTravelData_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(AutoMoveTowardsTargetProvider)
namespace Oculus::Interaction {
class AutoMoveTowardsTarget;
}
namespace Oculus::Interaction {
class IMovementProvider;
}
namespace Oculus::Interaction {
class IMovement;
}
namespace Oculus::Interaction {
class IPointableElement;
}
namespace Oculus::Interaction {
struct PoseTravelData;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction {
class AutoMoveTowardsTargetProvider;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::AutoMoveTowardsTargetProvider*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::AutoMoveTowardsTargetProvider*, "Oculus.Interaction", "AutoMoveTowardsTargetProvider");
// Dependencies Oculus.Interaction.PoseTravelData, UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.AutoMoveTowardsTargetProvider
class CORDL_TYPE AutoMoveTowardsTargetProvider : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_PointableElement, put=set_PointableElement)) ::Oculus::Interaction::IPointableElement*  PointableElement;

 __declspec(property(get=get_TravellingData, put=set_TravellingData)) ::Oculus::Interaction::PoseTravelData  TravellingData;

/// @brief Field <PointableElement>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__PointableElement_k__BackingField, put=__cordl_internal_set__PointableElement_k__BackingField)) ::Oculus::Interaction::IPointableElement*  _PointableElement_k__BackingField;

/// @brief Field _movers, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__movers, put=__cordl_internal_set__movers)) ::System::Collections::Generic::List_1<::Oculus::Interaction::AutoMoveTowardsTarget*>*  _movers;

/// @brief Field _pointableElement, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__pointableElement, put=__cordl_internal_set__pointableElement)) ::UnityW<::UnityEngine::Object>  _pointableElement;

/// @brief Field _started, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _travellingData, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get__travellingData, put=__cordl_internal_set__travellingData)) ::Oculus::Interaction::PoseTravelData  _travellingData;

/// @brief Convert operator to "::Oculus::Interaction::IMovementProvider"
constexpr operator  ::Oculus::Interaction::IMovementProvider*() noexcept;

/// @brief Method Awake, addr 0xa4729a0, size 0x58, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CreateMovement, addr 0xa472b74, size 0x12c, virtual true, abstract: false, final true
inline ::Oculus::Interaction::IMovement* CreateMovement() ;

/// @brief Method HandleAborted, addr 0xa472e84, size 0x174, virtual false, abstract: false, final false
inline void HandleAborted(::Oculus::Interaction::AutoMoveTowardsTarget*  mover) ;

/// @brief Method InjectAllAutoMoveTowardsTargetProvider, addr 0xa472ff8, size 0x4, virtual false, abstract: false, final false
inline void InjectAllAutoMoveTowardsTargetProvider(::Oculus::Interaction::IPointableElement*  pointableElement) ;

/// @brief Method InjectPointableElement, addr 0xa472ffc, size 0xcc, virtual false, abstract: false, final false
inline void InjectPointableElement(::Oculus::Interaction::IPointableElement*  pointableElement) ;

/// @brief Method LateUpdate, addr 0xa472a24, size 0xe0, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::Oculus::Interaction::AutoMoveTowardsTargetProvider* New_ctor() ;

/// @brief Method Start, addr 0xa4729f8, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::Oculus::Interaction::IPointableElement* const& __cordl_internal_get__PointableElement_k__BackingField() const;

constexpr ::Oculus::Interaction::IPointableElement*& __cordl_internal_get__PointableElement_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::AutoMoveTowardsTarget*>* const& __cordl_internal_get__movers() const;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::AutoMoveTowardsTarget*>*& __cordl_internal_get__movers() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__pointableElement() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__pointableElement() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr ::Oculus::Interaction::PoseTravelData const& __cordl_internal_get__travellingData() const;

constexpr ::Oculus::Interaction::PoseTravelData& __cordl_internal_get__travellingData() ;

constexpr void __cordl_internal_set__PointableElement_k__BackingField(::Oculus::Interaction::IPointableElement*  value) ;

constexpr void __cordl_internal_set__movers(::System::Collections::Generic::List_1<::Oculus::Interaction::AutoMoveTowardsTarget*>*  value) ;

constexpr void __cordl_internal_set__pointableElement(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__travellingData(::Oculus::Interaction::PoseTravelData  value) ;

/// @brief Method .ctor, addr 0xa4730c8, size 0xa4, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_PointableElement, addr 0xa472990, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::IPointableElement* get_PointableElement() ;

/// @brief Method get_TravellingData, addr 0xa472970, size 0xc, virtual false, abstract: false, final false
inline ::Oculus::Interaction::PoseTravelData get_TravellingData() ;

/// @brief Convert to "::Oculus::Interaction::IMovementProvider"
constexpr ::Oculus::Interaction::IMovementProvider* i___Oculus__Interaction__IMovementProvider() noexcept;

/// [CompilerGenerated]
/// @brief Method set_PointableElement, addr 0xa472998, size 0x8, virtual false, abstract: false, final false
inline void set_PointableElement(::Oculus::Interaction::IPointableElement*  value) ;

/// @brief Method set_TravellingData, addr 0xa47297c, size 0x14, virtual false, abstract: false, final false
inline void set_TravellingData(::Oculus::Interaction::PoseTravelData  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AutoMoveTowardsTargetProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AutoMoveTowardsTargetProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AutoMoveTowardsTargetProvider(AutoMoveTowardsTargetProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AutoMoveTowardsTargetProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AutoMoveTowardsTargetProvider(AutoMoveTowardsTargetProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15938};

/// [SerializeField]
/// @brief Field _travellingData, offset: 0x20, size: 0x10, def value: None
 ::Oculus::Interaction::PoseTravelData  ____travellingData;

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.IPointableElement), new[] {  })]
/// @brief Field _pointableElement, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____pointableElement;

/// [CompilerGenerated]
/// @brief Field <PointableElement>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::Oculus::Interaction::IPointableElement*  ____PointableElement_k__BackingField;

/// @brief Field _started, offset: 0x40, size: 0x1, def value: None
 bool  ____started;

/// @brief Field _movers, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Oculus::Interaction::AutoMoveTowardsTarget*>*  ____movers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::AutoMoveTowardsTargetProvider, ____travellingData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::AutoMoveTowardsTargetProvider, ____pointableElement) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::AutoMoveTowardsTargetProvider, ____PointableElement_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::AutoMoveTowardsTargetProvider, ____started) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::AutoMoveTowardsTargetProvider, ____movers) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::AutoMoveTowardsTargetProvider) == 0x50, "Size mismatch!");

} // namespace end def Oculus::Interaction
