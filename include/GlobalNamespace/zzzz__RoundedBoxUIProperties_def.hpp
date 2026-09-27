#pragma once
// IWYU pragma private; include "GlobalNamespace/RoundedBoxUIProperties.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RoundedBoxUIProperties)
namespace GlobalNamespace {
class RoundedBoxUIProperties__DelayVertexGeneration_d__5;
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
namespace UnityEngine::UI {
class IMeshModifier;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine::UI {
class VertexHelper;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace GlobalNamespace {
class RoundedBoxUIProperties;
}
namespace GlobalNamespace {
class RoundedBoxUIProperties__DelayVertexGeneration_d__5;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RoundedBoxUIProperties*);
MARK_REF_T(::GlobalNamespace::RoundedBoxUIProperties__DelayVertexGeneration_d__5*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RoundedBoxUIProperties*, "", "RoundedBoxUIProperties");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RoundedBoxUIProperties__DelayVertexGeneration_d__5*, "", "RoundedBoxUIProperties/<DelayVertexGeneration>d__5");
// Dependencies UnityEngine.EventSystems.UIBehaviour, UnityEngine.Vector4
namespace GlobalNamespace {
// Is value type: false
// CS Name: RoundedBoxUIProperties
class CORDL_TYPE RoundedBoxUIProperties : public ::UnityEngine::EventSystems::UIBehaviour {
public:
// Declarations
using _DelayVertexGeneration_d__5 = ::GlobalNamespace::RoundedBoxUIProperties__DelayVertexGeneration_d__5;

/// @brief Field _image, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__image, put=__cordl_internal_set__image)) ::UnityW<::UnityEngine::UI::Image>  _image;

/// @brief Field borderRadius, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_borderRadius, put=__cordl_internal_set_borderRadius)) ::UnityEngine::Vector4  borderRadius;

/// @brief Convert operator to "::UnityEngine::UI::IMeshModifier"
constexpr operator  ::UnityEngine::UI::IMeshModifier*() noexcept;

/// [IteratorStateMachine(typeof(RoundedBoxUIProperties::<DelayVertexGeneration>d__5))]
/// @brief Method DelayVertexGeneration, addr 0xa425630, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DelayVertexGeneration() ;

/// @brief Method ModifyMesh, addr 0xa4256c4, size 0x4, virtual true, abstract: false, final true
inline void ModifyMesh(::UnityEngine::Mesh*  mesh) ;

/// @brief Method ModifyMesh, addr 0xa4256c8, size 0x1f4, virtual true, abstract: false, final true
inline void ModifyMesh(::UnityEngine::UI::VertexHelper*  verts) ;

static inline ::GlobalNamespace::RoundedBoxUIProperties* New_ctor() ;

/// @brief Method OnDisable, addr 0xa425604, size 0xc, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa42559c, size 0x68, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa425610, size 0x20, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__image() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__image() ;

constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_borderRadius() const;

constexpr ::UnityEngine::Vector4& __cordl_internal_get_borderRadius() ;

constexpr void __cordl_internal_set__image(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set_borderRadius(::UnityEngine::Vector4  value) ;

/// @brief Method .ctor, addr 0xa4258bc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::UnityEngine::UI::IMeshModifier"
constexpr ::UnityEngine::UI::IMeshModifier* i___UnityEngine__UI__IMeshModifier() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RoundedBoxUIProperties() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RoundedBoxUIProperties", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RoundedBoxUIProperties(RoundedBoxUIProperties && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RoundedBoxUIProperties", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RoundedBoxUIProperties(RoundedBoxUIProperties const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28233};

/// @brief Field _image, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ____image;

/// @brief Field borderRadius, offset: 0x28, size: 0x10, def value: None
 ::UnityEngine::Vector4  ___borderRadius;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RoundedBoxUIProperties, ____image) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoundedBoxUIProperties, ___borderRadius) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RoundedBoxUIProperties) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RoundedBoxUIProperties/<DelayVertexGeneration>d__5
class CORDL_TYPE RoundedBoxUIProperties__DelayVertexGeneration_d__5 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::RoundedBoxUIProperties>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xa4258c8, size 0x170, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::RoundedBoxUIProperties__DelayVertexGeneration_d__5* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0xa425a38, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xa425a40, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xa425a78, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xa4258c4, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::RoundedBoxUIProperties> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::RoundedBoxUIProperties>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::RoundedBoxUIProperties>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xa42569c, size 0x28, virtual false, abstract: false, final false
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
constexpr RoundedBoxUIProperties__DelayVertexGeneration_d__5() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RoundedBoxUIProperties__DelayVertexGeneration_d__5", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RoundedBoxUIProperties__DelayVertexGeneration_d__5(RoundedBoxUIProperties__DelayVertexGeneration_d__5 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RoundedBoxUIProperties__DelayVertexGeneration_d__5", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RoundedBoxUIProperties__DelayVertexGeneration_d__5(RoundedBoxUIProperties__DelayVertexGeneration_d__5 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28232};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RoundedBoxUIProperties>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RoundedBoxUIProperties__DelayVertexGeneration_d__5, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoundedBoxUIProperties__DelayVertexGeneration_d__5, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoundedBoxUIProperties__DelayVertexGeneration_d__5, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RoundedBoxUIProperties__DelayVertexGeneration_d__5) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
