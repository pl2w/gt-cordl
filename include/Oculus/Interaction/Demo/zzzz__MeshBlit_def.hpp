#pragma once
// IWYU pragma private; include "Oculus/Interaction/Demo/MeshBlit.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MeshBlit)
namespace Oculus::Interaction::Demo {
class MeshBlit___OnEnable_g__BlitRoutine_11_0_d;
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
class Mesh;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class WaitForSeconds;
}
// Forward declare root types
namespace Oculus::Interaction::Demo {
class MeshBlit;
}
namespace Oculus::Interaction::Demo {
class MeshBlit___OnEnable_g__BlitRoutine_11_0_d;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Demo::MeshBlit*);
MARK_REF_T(::Oculus::Interaction::Demo::MeshBlit___OnEnable_g__BlitRoutine_11_0_d*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Demo::MeshBlit*, "Oculus.Interaction.Demo", "MeshBlit");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Demo::MeshBlit___OnEnable_g__BlitRoutine_11_0_d*, "Oculus.Interaction.Demo", "MeshBlit/<<OnEnable>g__BlitRoutine|11_0>d");
// [RequireComponent(typeof(UnityEngine.MeshFilter))]
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Demo {
// Is value type: false
// CS Name: Oculus.Interaction.Demo.MeshBlit
class CORDL_TYPE MeshBlit : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __OnEnable_g__BlitRoutine_11_0_d = ::Oculus::Interaction::Demo::MeshBlit___OnEnable_g__BlitRoutine_11_0_d;

 __declspec(property(get=get_BlitsPerSecond, put=set_BlitsPerSecond)) float_t  BlitsPerSecond;

/// @brief Field MAIN_TEX, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_MAIN_TEX, put=setStaticF_MAIN_TEX)) int32_t  MAIN_TEX;

 __declspec(property(get=get_Mesh)) ::UnityW<::UnityEngine::Mesh>  Mesh;

/// @brief Field _blitsPerSecond, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__blitsPerSecond, put=__cordl_internal_set__blitsPerSecond)) float_t  _blitsPerSecond;

/// @brief Field _mesh, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__mesh, put=__cordl_internal_set__mesh)) ::UnityW<::UnityEngine::Mesh>  _mesh;

/// @brief Field _waitForSeconds, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__waitForSeconds, put=__cordl_internal_set__waitForSeconds)) ::UnityEngine::WaitForSeconds*  _waitForSeconds;

/// @brief Field material, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_material, put=__cordl_internal_set_material)) ::UnityW<::UnityEngine::Material>  material;

/// @brief Field renderTexture, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_renderTexture, put=__cordl_internal_set_renderTexture)) ::UnityW<::UnityEngine::RenderTexture>  renderTexture;

/// @brief Method Blit, addr 0xa42fa14, size 0x2dc, virtual false, abstract: false, final false
inline void Blit() ;

static inline ::Oculus::Interaction::Demo::MeshBlit* New_ctor() ;

/// @brief Method OnEnable, addr 0xa42f97c, size 0x2c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetBlitsPerSecond, addr 0xa42f83c, size 0x88, virtual false, abstract: false, final false
inline void SetBlitsPerSecond(float_t  value) ;

/// [IteratorStateMachine(typeof(Oculus.Interaction.Demo.MeshBlit::<<OnEnable>g__BlitRoutine|11_0>d))]
/// [CompilerGenerated]
/// @brief Method <OnEnable>g__BlitRoutine|11_0, addr 0xa42f9a8, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* _OnEnable_g__BlitRoutine_11_0() ;

constexpr float_t const& __cordl_internal_get__blitsPerSecond() const;

constexpr float_t& __cordl_internal_get__blitsPerSecond() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get__mesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get__mesh() ;

constexpr ::UnityEngine::WaitForSeconds* const& __cordl_internal_get__waitForSeconds() const;

constexpr ::UnityEngine::WaitForSeconds*& __cordl_internal_get__waitForSeconds() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_renderTexture() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_renderTexture() ;

constexpr void __cordl_internal_set__blitsPerSecond(float_t  value) ;

constexpr void __cordl_internal_set__mesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set__waitForSeconds(::UnityEngine::WaitForSeconds*  value) ;

constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_renderTexture(::UnityW<::UnityEngine::RenderTexture>  value) ;

/// @brief Method .ctor, addr 0xa42fcf0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_MAIN_TEX() ;

/// @brief Method get_BlitsPerSecond, addr 0xa42f830, size 0x8, virtual false, abstract: false, final false
inline float_t get_BlitsPerSecond() ;

/// @brief Method get_Mesh, addr 0xa42f8c4, size 0xb8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Mesh> get_Mesh() ;

static inline void setStaticF_MAIN_TEX(int32_t  value) ;

/// @brief Method set_BlitsPerSecond, addr 0xa42f838, size 0x4, virtual false, abstract: false, final false
inline void set_BlitsPerSecond(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MeshBlit() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MeshBlit", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MeshBlit(MeshBlit && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MeshBlit", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MeshBlit(MeshBlit const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28274};

/// @brief Field material, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___material;

/// @brief Field renderTexture, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___renderTexture;

/// [SerializeField]
/// @brief Field _blitsPerSecond, offset: 0x30, size: 0x4, def value: None
 float_t  ____blitsPerSecond;

/// @brief Field _mesh, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ____mesh;

/// @brief Field _waitForSeconds, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::WaitForSeconds*  ____waitForSeconds;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Demo::MeshBlit, ___material) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Demo::MeshBlit, ___renderTexture) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Demo::MeshBlit, ____blitsPerSecond) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Demo::MeshBlit, ____mesh) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Demo::MeshBlit, ____waitForSeconds) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Demo::MeshBlit) == 0x48, "Size mismatch!");

} // namespace end def Oculus::Interaction::Demo
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::Demo {
// Is value type: false
// CS Name: Oculus.Interaction.Demo.MeshBlit/<<OnEnable>g__BlitRoutine|11_0>d
class CORDL_TYPE MeshBlit___OnEnable_g__BlitRoutine_11_0_d : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Oculus::Interaction::Demo::MeshBlit>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xa42fd94, size 0x74, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Oculus::Interaction::Demo::MeshBlit___OnEnable_g__BlitRoutine_11_0_d* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0xa42fe08, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xa42fe10, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xa42fe48, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xa42fd90, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Oculus::Interaction::Demo::MeshBlit> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Oculus::Interaction::Demo::MeshBlit>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Oculus::Interaction::Demo::MeshBlit>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xa42fd68, size 0x28, virtual false, abstract: false, final false
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
constexpr MeshBlit___OnEnable_g__BlitRoutine_11_0_d() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MeshBlit___OnEnable_g__BlitRoutine_11_0_d", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MeshBlit___OnEnable_g__BlitRoutine_11_0_d(MeshBlit___OnEnable_g__BlitRoutine_11_0_d && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MeshBlit___OnEnable_g__BlitRoutine_11_0_d", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MeshBlit___OnEnable_g__BlitRoutine_11_0_d(MeshBlit___OnEnable_g__BlitRoutine_11_0_d const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28273};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::Demo::MeshBlit>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Demo::MeshBlit___OnEnable_g__BlitRoutine_11_0_d, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Demo::MeshBlit___OnEnable_g__BlitRoutine_11_0_d, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Demo::MeshBlit___OnEnable_g__BlitRoutine_11_0_d, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Demo::MeshBlit___OnEnable_g__BlitRoutine_11_0_d) == 0x28, "Size mismatch!");

} // namespace end def Oculus::Interaction::Demo
