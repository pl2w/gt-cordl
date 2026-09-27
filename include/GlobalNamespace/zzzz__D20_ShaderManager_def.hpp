#pragma once
// IWYU pragma private; include "GlobalNamespace/D20_ShaderManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(D20_ShaderManager)
namespace GlobalNamespace {
class D20_ShaderManager__UpdateVelocityCoroutine_d__6;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Rigidbody;
}
// Forward declare root types
namespace GlobalNamespace {
class D20_ShaderManager;
}
namespace GlobalNamespace {
class D20_ShaderManager__UpdateVelocityCoroutine_d__6;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::D20_ShaderManager*);
MARK_REF_T(::GlobalNamespace::D20_ShaderManager__UpdateVelocityCoroutine_d__6*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::D20_ShaderManager*, "", "D20_ShaderManager");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::D20_ShaderManager__UpdateVelocityCoroutine_d__6*, "", "D20_ShaderManager/<UpdateVelocityCoroutine>d__6");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: D20_ShaderManager
class CORDL_TYPE D20_ShaderManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _UpdateVelocityCoroutine_d__6 = ::GlobalNamespace::D20_ShaderManager__UpdateVelocityCoroutine_d__6;

/// @brief Field lastPosition, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastPosition, put=__cordl_internal_set_lastPosition)) ::UnityEngine::Vector3  lastPosition;

/// @brief Field material, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_material, put=__cordl_internal_set_material)) ::UnityW<::UnityEngine::Material>  material;

/// @brief Field rb, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_rb, put=__cordl_internal_set_rb)) ::UnityW<::UnityEngine::Rigidbody>  rb;

/// @brief Field updateInterval, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_updateInterval, put=__cordl_internal_set_updateInterval)) float_t  updateInterval;

/// @brief Field velocity, offset 0x38, size 0xc 
 __declspec(property(get=__cordl_internal_get_velocity, put=__cordl_internal_set_velocity)) ::UnityEngine::Vector3  velocity;

static inline ::GlobalNamespace::D20_ShaderManager* New_ctor() ;

/// @brief Method Start, addr 0x5615e64, size 0x108, virtual false, abstract: false, final false
inline void Start() ;

/// [IteratorStateMachine(typeof(D20_ShaderManager::<UpdateVelocityCoroutine>d__6))]
/// @brief Method UpdateVelocityCoroutine, addr 0x5615f6c, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* UpdateVelocityCoroutine() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastPosition() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_rb() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_rb() ;

constexpr float_t const& __cordl_internal_get_updateInterval() const;

constexpr float_t& __cordl_internal_get_updateInterval() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_velocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_velocity() ;

constexpr void __cordl_internal_set_lastPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_rb(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_updateInterval(float_t  value) ;

constexpr void __cordl_internal_set_velocity(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x5616000, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr D20_ShaderManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "D20_ShaderManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
D20_ShaderManager(D20_ShaderManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "D20_ShaderManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
D20_ShaderManager(D20_ShaderManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{555};

/// @brief Field rb, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___rb;

/// @brief Field lastPosition, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastPosition;

/// @brief Field updateInterval, offset: 0x34, size: 0x4, def value: None
 float_t  ___updateInterval;

/// @brief Field velocity, offset: 0x38, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___velocity;

/// @brief Field material, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___material;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::D20_ShaderManager, ___rb) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::D20_ShaderManager, ___lastPosition) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::D20_ShaderManager, ___updateInterval) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::D20_ShaderManager, ___velocity) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::D20_ShaderManager, ___material) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::D20_ShaderManager) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: D20_ShaderManager/<UpdateVelocityCoroutine>d__6
class CORDL_TYPE D20_ShaderManager__UpdateVelocityCoroutine_d__6 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::D20_ShaderManager>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5616018, size 0x124, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::D20_ShaderManager__UpdateVelocityCoroutine_d__6* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x561613c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5616144, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x561617c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5616014, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::D20_ShaderManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::D20_ShaderManager>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::D20_ShaderManager>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5615fd8, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr D20_ShaderManager__UpdateVelocityCoroutine_d__6() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "D20_ShaderManager__UpdateVelocityCoroutine_d__6", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
D20_ShaderManager__UpdateVelocityCoroutine_d__6(D20_ShaderManager__UpdateVelocityCoroutine_d__6 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "D20_ShaderManager__UpdateVelocityCoroutine_d__6", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
D20_ShaderManager__UpdateVelocityCoroutine_d__6(D20_ShaderManager__UpdateVelocityCoroutine_d__6 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{554};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::D20_ShaderManager>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::D20_ShaderManager__UpdateVelocityCoroutine_d__6, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::D20_ShaderManager__UpdateVelocityCoroutine_d__6, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::D20_ShaderManager__UpdateVelocityCoroutine_d__6, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::D20_ShaderManager__UpdateVelocityCoroutine_d__6) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
