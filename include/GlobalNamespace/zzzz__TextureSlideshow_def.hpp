#pragma once
// IWYU pragma private; include "GlobalNamespace/TextureSlideshow.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TextureSlideshow)
namespace GlobalNamespace {
class TextureSlideshow__runSlideshow_d__7;
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
class Renderer;
}
// Forward declare root types
namespace GlobalNamespace {
class TextureSlideshow;
}
namespace GlobalNamespace {
class TextureSlideshow__runSlideshow_d__7;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TextureSlideshow*);
MARK_REF_T(::GlobalNamespace::TextureSlideshow__runSlideshow_d__7*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TextureSlideshow*, "", "TextureSlideshow");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TextureSlideshow__runSlideshow_d__7*, "", "TextureSlideshow/<runSlideshow>d__7");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Texture, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: false
// CS Name: TextureSlideshow
class CORDL_TYPE TextureSlideshow : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _runSlideshow_d__7 = ::GlobalNamespace::TextureSlideshow__runSlideshow_d__7;

/// @brief Field _renderer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__renderer, put=__cordl_internal_set__renderer)) ::UnityW<::UnityEngine::Renderer>  _renderer;

/// @brief Field minMaxPause, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_minMaxPause, put=__cordl_internal_set_minMaxPause)) ::UnityEngine::Vector2  minMaxPause;

/// @brief Field prePause, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_prePause, put=__cordl_internal_set_prePause)) float_t  prePause;

/// @brief Field textures, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_textures, put=__cordl_internal_set_textures)) ::ArrayW<::UnityW<::UnityEngine::Texture>>  textures;

/// @brief Method Awake, addr 0x55ec414, size 0x94, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::TextureSlideshow* New_ctor() ;

/// @brief Method OnDisable, addr 0x55ec534, size 0x8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x55ec4a8, size 0x20, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__renderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__renderer() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_minMaxPause() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_minMaxPause() ;

constexpr float_t const& __cordl_internal_get_prePause() const;

constexpr float_t& __cordl_internal_get_prePause() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Texture>> const& __cordl_internal_get_textures() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Texture>>& __cordl_internal_get_textures() ;

constexpr void __cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set_minMaxPause(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_prePause(float_t  value) ;

constexpr void __cordl_internal_set_textures(::ArrayW<::UnityW<::UnityEngine::Texture>>  value) ;

/// @brief Method .ctor, addr 0x55ec564, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// [IteratorStateMachine(typeof(TextureSlideshow::<runSlideshow>d__7))]
/// @brief Method runSlideshow, addr 0x55ec4c8, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* runSlideshow() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextureSlideshow() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextureSlideshow", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TextureSlideshow(TextureSlideshow && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextureSlideshow", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextureSlideshow(TextureSlideshow const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{53};

/// @brief Field _renderer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____renderer;

/// [SerializeField]
/// @brief Field textures, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Texture>>  ___textures;

/// [SerializeField]
/// @brief Field minMaxPause, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___minMaxPause;

/// [SerializeField]
/// @brief Field prePause, offset: 0x38, size: 0x4, def value: None
 float_t  ___prePause;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TextureSlideshow, ____renderer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureSlideshow, ___textures) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureSlideshow, ___minMaxPause) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureSlideshow, ___prePause) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TextureSlideshow) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: TextureSlideshow/<runSlideshow>d__7
class CORDL_TYPE TextureSlideshow__runSlideshow_d__7 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::TextureSlideshow>  __4__this;

/// @brief Field <i>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__i_5__2, put=__cordl_internal_set__i_5__2)) int32_t  _i_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x55ec578, size 0x17c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::TextureSlideshow__runSlideshow_d__7* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x55ec6f4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x55ec6fc, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x55ec734, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x55ec574, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::TextureSlideshow> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::TextureSlideshow>& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get__i_5__2() const;

constexpr int32_t& __cordl_internal_get__i_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::TextureSlideshow>  value) ;

constexpr void __cordl_internal_set__i_5__2(int32_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x55ec53c, size 0x28, virtual false, abstract: false, final false
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
constexpr TextureSlideshow__runSlideshow_d__7() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextureSlideshow__runSlideshow_d__7", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TextureSlideshow__runSlideshow_d__7(TextureSlideshow__runSlideshow_d__7 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextureSlideshow__runSlideshow_d__7", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextureSlideshow__runSlideshow_d__7(TextureSlideshow__runSlideshow_d__7 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{52};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TextureSlideshow>  _____4__this;

/// @brief Field <i>5__2, offset: 0x28, size: 0x4, def value: None
 int32_t  ____i_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TextureSlideshow__runSlideshow_d__7, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureSlideshow__runSlideshow_d__7, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureSlideshow__runSlideshow_d__7, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextureSlideshow__runSlideshow_d__7, ____i_5__2) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TextureSlideshow__runSlideshow_d__7) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
