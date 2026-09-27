#pragma once
// IWYU pragma private; include "GlobalNamespace/ThermalManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ThermalManager)
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace GlobalNamespace {
class ThermalReceiver;
}
namespace GlobalNamespace {
class ThermalSourceVolume;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class ThermalManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ThermalManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ThermalManager*, "", "ThermalManager");
// [DefaultExecutionOrder(-100)]
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ThermalManager
class CORDL_TYPE ThermalManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GlobalNamespace::ThermalManager>  instance;

/// @brief Field lastTime, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastTime, put=__cordl_internal_set_lastTime)) float_t  lastTime;

/// @brief Field receivers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_receivers, put=setStaticF_receivers)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ThermalReceiver>>*  receivers;

/// @brief Field sources, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_sources, put=setStaticF_sources)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ThermalSourceVolume>>*  sources;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

static inline ::GlobalNamespace::ThermalManager* New_ctor() ;

/// @brief Method OnDisable, addr 0x56affc8, size 0xc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x56afea4, size 0x124, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Register, addr 0x56b0508, size 0xd4, virtual false, abstract: false, final false
static inline void Register(::GlobalNamespace::ThermalReceiver*  receiver) ;

/// @brief Method Register, addr 0x56b03b4, size 0xd4, virtual false, abstract: false, final false
static inline void Register(::GlobalNamespace::ThermalSourceVolume*  source) ;

/// @brief Method SliceUpdate, addr 0x56affd4, size 0x3e0, virtual true, abstract: false, final true
inline void SliceUpdate() ;

/// @brief Method Unregister, addr 0x56b05dc, size 0x80, virtual false, abstract: false, final false
static inline void Unregister(::GlobalNamespace::ThermalReceiver*  receiver) ;

/// @brief Method Unregister, addr 0x56b0488, size 0x80, virtual false, abstract: false, final false
static inline void Unregister(::GlobalNamespace::ThermalSourceVolume*  source) ;

constexpr float_t const& __cordl_internal_get_lastTime() const;

constexpr float_t& __cordl_internal_get_lastTime() ;

constexpr void __cordl_internal_set_lastTime(float_t  value) ;

/// @brief Method .ctor, addr 0x56b065c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::ThermalManager> getStaticF_instance() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ThermalReceiver>>* getStaticF_receivers() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ThermalSourceVolume>>* getStaticF_sources() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

static inline void setStaticF_instance(::UnityW<::GlobalNamespace::ThermalManager>  value) ;

static inline void setStaticF_receivers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ThermalReceiver>>*  value) ;

static inline void setStaticF_sources(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ThermalSourceVolume>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ThermalManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ThermalManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ThermalManager(ThermalManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThermalManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThermalManager(ThermalManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{936};

/// @brief Field lastTime, offset: 0x20, size: 0x4, def value: None
 float_t  ___lastTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ThermalManager, ___lastTime) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ThermalManager) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
