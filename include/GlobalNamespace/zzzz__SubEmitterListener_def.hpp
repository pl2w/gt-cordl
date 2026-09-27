#pragma once
// IWYU pragma private; include "GlobalNamespace/SubEmitterListener.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TimeSince_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SubEmitterListener)
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class SubEmitterListener;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SubEmitterListener*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SubEmitterListener*, "", "SubEmitterListener");
// Dependencies TimeSince, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SubEmitterListener
class CORDL_TYPE SubEmitterListener : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _canListen, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__canListen, put=__cordl_internal_set__canListen)) bool  _canListen;

/// @brief Field _listenOnce, offset 0x4a, size 0x1 
 __declspec(property(get=__cordl_internal_get__listenOnce, put=__cordl_internal_set__listenOnce)) bool  _listenOnce;

/// @brief Field _listening, offset 0x49, size 0x1 
 __declspec(property(get=__cordl_internal_get__listening, put=__cordl_internal_set__listening)) bool  _listening;

/// @brief Field _sinceLastEmit, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__sinceLastEmit, put=__cordl_internal_set__sinceLastEmit)) ::GlobalNamespace::TimeSince  _sinceLastEmit;

/// @brief Field interval, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_interval, put=__cordl_internal_set_interval)) float_t  interval;

/// @brief Field intervalScale, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_intervalScale, put=__cordl_internal_set_intervalScale)) float_t  intervalScale;

/// @brief Field onSubEmit, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_onSubEmit, put=__cordl_internal_set_onSubEmit)) ::UnityEngine::Events::UnityEvent*  onSubEmit;

/// @brief Field subEmitter, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_subEmitter, put=__cordl_internal_set_subEmitter)) ::UnityW<::UnityEngine::ParticleSystem>  subEmitter;

/// @brief Field subEmitterIndex, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_subEmitterIndex, put=__cordl_internal_set_subEmitterIndex)) int32_t  subEmitterIndex;

/// @brief Field target, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::ParticleSystem>  target;

/// @brief Method Disable, addr 0x5a21464, size 0x30, virtual false, abstract: false, final false
inline void Disable() ;

/// @brief Method Enable, addr 0x5a214d0, size 0x30, virtual false, abstract: false, final false
inline void Enable() ;

/// @brief Method ListenOnce, addr 0x5a21504, size 0x38, virtual false, abstract: false, final false
inline void ListenOnce() ;

/// @brief Method ListenStart, addr 0x5a2149c, size 0x34, virtual false, abstract: false, final false
inline void ListenStart() ;

/// @brief Method ListenStop, addr 0x5a21500, size 0x4, virtual false, abstract: false, final false
inline void ListenStop() ;

static inline ::GlobalNamespace::SubEmitterListener* New_ctor() ;

/// @brief Method OnDisable, addr 0x5a21494, size 0x8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5a212d0, size 0x194, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnSubEmit, addr 0x5a21614, size 0x14, virtual true, abstract: false, final false
inline void OnSubEmit() ;

/// @brief Method Update, addr 0x5a2153c, size 0xa8, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get__canListen() const;

constexpr bool& __cordl_internal_get__canListen() ;

constexpr bool const& __cordl_internal_get__listenOnce() const;

constexpr bool& __cordl_internal_get__listenOnce() ;

constexpr bool const& __cordl_internal_get__listening() const;

constexpr bool& __cordl_internal_get__listening() ;

constexpr ::GlobalNamespace::TimeSince const& __cordl_internal_get__sinceLastEmit() const;

constexpr ::GlobalNamespace::TimeSince& __cordl_internal_get__sinceLastEmit() ;

constexpr float_t const& __cordl_internal_get_interval() const;

constexpr float_t& __cordl_internal_get_interval() ;

constexpr float_t const& __cordl_internal_get_intervalScale() const;

constexpr float_t& __cordl_internal_get_intervalScale() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onSubEmit() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onSubEmit() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_subEmitter() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_subEmitter() ;

constexpr int32_t const& __cordl_internal_get_subEmitterIndex() const;

constexpr int32_t& __cordl_internal_get_subEmitterIndex() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set__canListen(bool  value) ;

constexpr void __cordl_internal_set__listenOnce(bool  value) ;

constexpr void __cordl_internal_set__listening(bool  value) ;

constexpr void __cordl_internal_set__sinceLastEmit(::GlobalNamespace::TimeSince  value) ;

constexpr void __cordl_internal_set_interval(float_t  value) ;

constexpr void __cordl_internal_set_intervalScale(float_t  value) ;

constexpr void __cordl_internal_set_onSubEmit(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_subEmitter(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_subEmitterIndex(int32_t  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::ParticleSystem>  value) ;

/// @brief Method .ctor, addr 0x5a21628, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SubEmitterListener() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SubEmitterListener", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SubEmitterListener(SubEmitterListener && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SubEmitterListener", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SubEmitterListener(SubEmitterListener const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2843};

/// @brief Field target, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___target;

/// @brief Field subEmitter, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___subEmitter;

/// @brief Field subEmitterIndex, offset: 0x30, size: 0x4, def value: None
 int32_t  ___subEmitterIndex;

/// @brief Field onSubEmit, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onSubEmit;

/// @brief Field intervalScale, offset: 0x40, size: 0x4, def value: None
 float_t  ___intervalScale;

/// @brief Field interval, offset: 0x44, size: 0x4, def value: None
 float_t  ___interval;

/// @brief Field _canListen, offset: 0x48, size: 0x1, def value: None
 bool  ____canListen;

/// @brief Field _listening, offset: 0x49, size: 0x1, def value: None
 bool  ____listening;

/// @brief Field _listenOnce, offset: 0x4a, size: 0x1, def value: None
 bool  ____listenOnce;

/// @brief Field _sinceLastEmit, offset: 0x50, size: 0x8, def value: None
 ::GlobalNamespace::TimeSince  ____sinceLastEmit;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SubEmitterListener, ___target) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SubEmitterListener, ___subEmitter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SubEmitterListener, ___subEmitterIndex) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SubEmitterListener, ___onSubEmit) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SubEmitterListener, ___intervalScale) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SubEmitterListener, ___interval) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SubEmitterListener, ____canListen) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SubEmitterListener, ____listening) == 0x49, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SubEmitterListener, ____listenOnce) == 0x4a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SubEmitterListener, ____sinceLastEmit) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SubEmitterListener) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
