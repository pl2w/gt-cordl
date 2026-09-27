#pragma once
// IWYU pragma private; include "MaterialCycler/MaterialCycler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MaterialCycler)
namespace GlobalNamespace {
class GrabbingColorPicker;
}
namespace MaterialCycler {
class MaterialCycler_MaterialPack;
}
namespace MaterialCycler {
class MaterialCycler__timeOutDirty_d__28;
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
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace MaterialCycler {
class MaterialCycler;
}
namespace MaterialCycler {
class MaterialCycler_MaterialPack;
}
namespace MaterialCycler {
class MaterialCycler__timeOutDirty_d__28;
}
// Write type traits
MARK_REF_T(::MaterialCycler::MaterialCycler*);
MARK_REF_T(::MaterialCycler::MaterialCycler_MaterialPack*);
MARK_REF_T(::MaterialCycler::MaterialCycler__timeOutDirty_d__28*);
DEFINE_IL2CPP_CLASS(::MaterialCycler::MaterialCycler*, "MaterialCycler", "MaterialCycler");
DEFINE_IL2CPP_CLASS(::MaterialCycler::MaterialCycler_MaterialPack*, "MaterialCycler", "MaterialCycler/MaterialPack");
DEFINE_IL2CPP_CLASS(::MaterialCycler::MaterialCycler__timeOutDirty_d__28*, "MaterialCycler", "MaterialCycler/<timeOutDirty>d__28");
// Dependencies MaterialCycler.MaterialCycler::MaterialPack, System.Nullable`1<T>, UnityEngine.MonoBehaviour, UnityEngine.Renderer
namespace MaterialCycler {
// Is value type: false
// CS Name: MaterialCycler.MaterialCycler
class CORDL_TYPE MaterialCycler : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using MaterialPack = ::MaterialCycler::MaterialCycler_MaterialPack;

using _timeOutDirty_d__28 = ::MaterialCycler::MaterialCycler__timeOutDirty_d__28;

 __declspec(property(get=get_ColorPicker)) ::UnityW<::GlobalNamespace::GrabbingColorPicker>  ColorPicker;

 __declspec(property(get=get_KeyHash)) int32_t  KeyHash;

 __declspec(property(get=get_NumMaterials)) int32_t  NumMaterials;

/// @brief Field _colorPicker, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__colorPicker, put=__cordl_internal_set__colorPicker)) ::UnityW<::GlobalNamespace::GrabbingColorPicker>  _colorPicker;

/// @brief Field _cyclerKey, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__cyclerKey, put=__cordl_internal_set__cyclerKey)) ::StringW  _cyclerKey;

/// @brief Field <index>k__BackingField, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__index_k__BackingField, put=__cordl_internal_set__index_k__BackingField)) int32_t  _index_k__BackingField;

/// @brief Field _keyHash, offset 0x68, size 0x10 
 __declspec(property(get=__cordl_internal_get__keyHash, put=__cordl_internal_set__keyHash)) ::System::Nullable_1<int32_t>  _keyHash;

/// @brief Field crDirty, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_crDirty, put=__cordl_internal_set_crDirty)) ::UnityEngine::Coroutine*  crDirty;

 __declspec(property(get=get_index, put=set_index)) int32_t  index;

/// @brief Field materials, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_materials, put=__cordl_internal_set_materials)) ::ArrayW<::MaterialCycler::MaterialCycler_MaterialPack*>  materials;

/// @brief Field renderers, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_renderers, put=__cordl_internal_set_renderers)) ::ArrayW<::UnityW<::UnityEngine::Renderer>>  renderers;

/// @brief Field reset, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_reset, put=__cordl_internal_set_reset)) ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*  reset;

/// @brief Field setColorTarget, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_setColorTarget, put=__cordl_internal_set_setColorTarget)) ::StringW  setColorTarget;

/// @brief Field synchTime, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_synchTime, put=__cordl_internal_set_synchTime)) float_t  synchTime;

/// @brief Method Awake, addr 0x5cd0f6c, size 0x6c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CycleMaterial, addr 0x5cd1b00, size 0x1c, virtual false, abstract: false, final false
inline void CycleMaterial(int32_t  newIndex) ;

/// @brief Method MaterialCyclerNetworked_OnSynchronize, addr 0x5cd170c, size 0x1f4, virtual false, abstract: false, final false
inline void MaterialCyclerNetworked_OnSynchronize(int32_t  idx, ::UnityEngine::Color  rgb) ;

static inline ::MaterialCycler::MaterialCycler* New_ctor() ;

/// @brief Method NextMaterial, addr 0x5cd1ac4, size 0x3c, virtual false, abstract: false, final false
inline void NextMaterial() ;

/// @brief Method OnDisable, addr 0x5cd1584, size 0x58, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5cd115c, size 0xc0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetColor, addr 0x5cd1f2c, size 0xa0, virtual false, abstract: false, final false
inline void SetColor(::UnityEngine::Vector3  rgb) ;

/// @brief Method SetDirty, addr 0x5cd1b1c, size 0xb4, virtual false, abstract: false, final false
inline void SetDirty() ;

/// @brief Method SetMaterials, addr 0x5cd0fd8, size 0x184, virtual false, abstract: false, final false
inline void SetMaterials() ;

/// @brief Method SynchronizeLocal, addr 0x5cd1900, size 0x1c4, virtual false, abstract: false, final false
inline void SynchronizeLocal(float_t  r, float_t  g, float_t  b) ;

constexpr ::UnityW<::GlobalNamespace::GrabbingColorPicker> const& __cordl_internal_get__colorPicker() const;

constexpr ::UnityW<::GlobalNamespace::GrabbingColorPicker>& __cordl_internal_get__colorPicker() ;

constexpr ::StringW const& __cordl_internal_get__cyclerKey() const;

constexpr ::StringW& __cordl_internal_get__cyclerKey() ;

constexpr int32_t const& __cordl_internal_get__index_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__index_k__BackingField() ;

constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__keyHash() const;

constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__keyHash() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_crDirty() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_crDirty() ;

constexpr ::ArrayW<::MaterialCycler::MaterialCycler_MaterialPack*> const& __cordl_internal_get_materials() const;

constexpr ::ArrayW<::MaterialCycler::MaterialCycler_MaterialPack*>& __cordl_internal_get_materials() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>> const& __cordl_internal_get_renderers() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>>& __cordl_internal_get_renderers() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>* const& __cordl_internal_get_reset() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*& __cordl_internal_get_reset() ;

constexpr ::StringW const& __cordl_internal_get_setColorTarget() const;

constexpr ::StringW& __cordl_internal_get_setColorTarget() ;

constexpr float_t const& __cordl_internal_get_synchTime() const;

constexpr float_t& __cordl_internal_get_synchTime() ;

constexpr void __cordl_internal_set__colorPicker(::UnityW<::GlobalNamespace::GrabbingColorPicker>  value) ;

constexpr void __cordl_internal_set__cyclerKey(::StringW  value) ;

constexpr void __cordl_internal_set__index_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__keyHash(::System::Nullable_1<int32_t>  value) ;

constexpr void __cordl_internal_set_crDirty(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_materials(::ArrayW<::MaterialCycler::MaterialCycler_MaterialPack*>  value) ;

constexpr void __cordl_internal_set_renderers(::ArrayW<::UnityW<::UnityEngine::Renderer>>  value) ;

constexpr void __cordl_internal_set_reset(::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set_setColorTarget(::StringW  value) ;

constexpr void __cordl_internal_set_synchTime(float_t  value) ;

/// @brief Method .ctor, addr 0x5cd1fcc, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ColorPicker, addr 0x5cd0eb4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::GrabbingColorPicker> get_ColorPicker() ;

/// @brief Method get_KeyHash, addr 0x5cd0ed4, size 0x98, virtual false, abstract: false, final false
inline int32_t get_KeyHash() ;

/// @brief Method get_NumMaterials, addr 0x5cd0ebc, size 0x18, virtual false, abstract: false, final false
inline int32_t get_NumMaterials() ;

/// [CompilerGenerated]
/// @brief Method get_index, addr 0x5cd0ea4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_index() ;

/// [CompilerGenerated]
/// @brief Method set_index, addr 0x5cd0eac, size 0x8, virtual false, abstract: false, final false
inline void set_index(int32_t  value) ;

/// @brief Method synchronize, addr 0x5cd1c64, size 0xa0, virtual false, abstract: false, final false
inline void synchronize() ;

/// [IteratorStateMachine(typeof(MaterialCycler.MaterialCycler::<timeOutDirty>d__28))]
/// @brief Method timeOutDirty, addr 0x5cd1bd0, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* timeOutDirty() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MaterialCycler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MaterialCycler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MaterialCycler(MaterialCycler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MaterialCycler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MaterialCycler(MaterialCycler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4471};

/// [SerializeField]
/// @brief Field _cyclerKey, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____cyclerKey;

/// [SerializeField]
/// @brief Field materials, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::MaterialCycler::MaterialCycler_MaterialPack*>  ___materials;

/// [SerializeField]
/// @brief Field renderers, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Renderer>>  ___renderers;

/// [CompilerGenerated]
/// @brief Field <index>k__BackingField, offset: 0x38, size: 0x4, def value: None
 int32_t  ____index_k__BackingField;

/// [SerializeField]
/// @brief Field setColorTarget, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___setColorTarget;

/// [SerializeField]
/// @brief Field reset, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*  ___reset;

/// [SerializeField]
/// @brief Field _colorPicker, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GrabbingColorPicker>  ____colorPicker;

/// @brief Field crDirty, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___crDirty;

/// @brief Field synchTime, offset: 0x60, size: 0x4, def value: None
 float_t  ___synchTime;

/// @brief Field _keyHash, offset: 0x68, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  ____keyHash;

/// @brief Size padding 0x70 - 0x78 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::MaterialCycler::MaterialCycler, ____cyclerKey) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MaterialCycler::MaterialCycler, ___materials) == 0x28, "Offset mismatch!");

static_assert(offsetof(::MaterialCycler::MaterialCycler, ___renderers) == 0x30, "Offset mismatch!");

static_assert(offsetof(::MaterialCycler::MaterialCycler, ____index_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::MaterialCycler::MaterialCycler, ___setColorTarget) == 0x40, "Offset mismatch!");

static_assert(offsetof(::MaterialCycler::MaterialCycler, ___reset) == 0x48, "Offset mismatch!");

static_assert(offsetof(::MaterialCycler::MaterialCycler, ____colorPicker) == 0x50, "Offset mismatch!");

static_assert(offsetof(::MaterialCycler::MaterialCycler, ___crDirty) == 0x58, "Offset mismatch!");

static_assert(offsetof(::MaterialCycler::MaterialCycler, ___synchTime) == 0x60, "Offset mismatch!");

static_assert(offsetof(::MaterialCycler::MaterialCycler, ____keyHash) == 0x68, "Offset mismatch!");

static_assert(sizeof(::MaterialCycler::MaterialCycler) == 0x70, "Size mismatch!");

} // namespace end def MaterialCycler
// [CompilerGenerated]
// Dependencies System.Object
namespace MaterialCycler {
// Is value type: false
// CS Name: MaterialCycler.MaterialCycler/<timeOutDirty>d__28
class CORDL_TYPE MaterialCycler__timeOutDirty_d__28 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::MaterialCycler::MaterialCycler>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5cd2038, size 0x8c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::MaterialCycler::MaterialCycler__timeOutDirty_d__28* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5cd20c4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5cd20cc, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5cd2104, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5cd2034, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::MaterialCycler::MaterialCycler> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::MaterialCycler::MaterialCycler>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::MaterialCycler::MaterialCycler>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5cd1c3c, size 0x28, virtual false, abstract: false, final false
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
constexpr MaterialCycler__timeOutDirty_d__28() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MaterialCycler__timeOutDirty_d__28", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MaterialCycler__timeOutDirty_d__28(MaterialCycler__timeOutDirty_d__28 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MaterialCycler__timeOutDirty_d__28", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MaterialCycler__timeOutDirty_d__28(MaterialCycler__timeOutDirty_d__28 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4470};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::MaterialCycler::MaterialCycler>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::MaterialCycler::MaterialCycler__timeOutDirty_d__28, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MaterialCycler::MaterialCycler__timeOutDirty_d__28, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MaterialCycler::MaterialCycler__timeOutDirty_d__28, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::MaterialCycler::MaterialCycler__timeOutDirty_d__28) == 0x28, "Size mismatch!");

} // namespace end def MaterialCycler
// Dependencies System.Object, UnityEngine.Material
namespace MaterialCycler {
// Is value type: false
// CS Name: MaterialCycler.MaterialCycler/MaterialPack
class CORDL_TYPE MaterialCycler_MaterialPack : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Materials)) ::ArrayW<::UnityW<::UnityEngine::Material>>  Materials;

/// @brief Field materials, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_materials, put=__cordl_internal_set_materials)) ::ArrayW<::UnityW<::UnityEngine::Material>>  materials;

static inline ::MaterialCycler::MaterialCycler_MaterialPack* New_ctor() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& __cordl_internal_get_materials() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& __cordl_internal_get_materials() ;

constexpr void __cordl_internal_set_materials(::ArrayW<::UnityW<::UnityEngine::Material>>  value) ;

/// @brief Method .ctor, addr 0x5cd202c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Materials, addr 0x5cd2024, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::UnityEngine::Material>> get_Materials() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MaterialCycler_MaterialPack() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MaterialCycler_MaterialPack", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MaterialCycler_MaterialPack(MaterialCycler_MaterialPack && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MaterialCycler_MaterialPack", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MaterialCycler_MaterialPack(MaterialCycler_MaterialPack const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4469};

/// [SerializeField]
/// @brief Field materials, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Material>>  ___materials;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::MaterialCycler::MaterialCycler_MaterialPack, ___materials) == 0x10, "Offset mismatch!");

static_assert(sizeof(::MaterialCycler::MaterialCycler_MaterialPack) == 0x18, "Size mismatch!");

} // namespace end def MaterialCycler
