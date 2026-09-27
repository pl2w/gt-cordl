#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaDayNight.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaLightmapData_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__LightmapData_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaDayNight)
namespace GlobalNamespace {
class GorillaDayNight__LightMapSet_d__25;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Threading {
class Thread;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class LightmapData;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaDayNight;
}
namespace GlobalNamespace {
class GorillaDayNight__LightMapSet_d__25;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaDayNight*);
MARK_REF_T(::GlobalNamespace::GorillaDayNight__LightMapSet_d__25*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaDayNight*, "", "GorillaDayNight");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaDayNight__LightMapSet_d__25*, "", "GorillaDayNight/<LightMapSet>d__25");
// Dependencies GorillaLightmapData, UnityEngine.Color, UnityEngine.LightmapData, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaDayNight
class CORDL_TYPE GorillaDayNight : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _LightMapSet_d__25 = ::GlobalNamespace::GorillaDayNight__LightMapSet_d__25;

/// @brief Field dirsThread, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_dirsThread, put=__cordl_internal_set_dirsThread)) ::System::Threading::Thread*  dirsThread;

/// @brief Field done, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_done, put=__cordl_internal_set_done)) bool  done;

/// @brief Field finishedStep, offset 0x3d, size 0x1 
 __declspec(property(get=__cordl_internal_get_finishedStep, put=__cordl_internal_set_finishedStep)) bool  finishedStep;

/// @brief Field firstData, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_firstData, put=__cordl_internal_set_firstData)) int32_t  firstData;

/// @brief Field fromPixels, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_fromPixels, put=__cordl_internal_set_fromPixels)) ::ArrayW<::UnityEngine::Color>  fromPixels;

/// @brief Field i, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_i, put=__cordl_internal_set_i)) int32_t  i;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GlobalNamespace::GorillaDayNight>  instance;

/// @brief Field j, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_j, put=__cordl_internal_set_j)) int32_t  j;

/// @brief Field k, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_k, put=__cordl_internal_set_k)) int32_t  k;

/// @brief Field l, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_l, put=__cordl_internal_set_l)) int32_t  l;

/// @brief Field lerpValue, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_lerpValue, put=__cordl_internal_set_lerpValue)) float_t  lerpValue;

/// @brief Field lightmapDatas, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_lightmapDatas, put=__cordl_internal_set_lightmapDatas)) ::ArrayW<::UnityW<::GlobalNamespace::GorillaLightmapData>>  lightmapDatas;

/// @brief Field lightsThread, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_lightsThread, put=__cordl_internal_set_lightsThread)) ::System::Threading::Thread*  lightsThread;

/// @brief Field mixedPixels, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_mixedPixels, put=__cordl_internal_set_mixedPixels)) ::ArrayW<::UnityEngine::Color>  mixedPixels;

/// @brief Field secondData, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_secondData, put=__cordl_internal_set_secondData)) int32_t  secondData;

/// @brief Field test, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get_test, put=__cordl_internal_set_test)) bool  test;

/// @brief Field toPixels, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_toPixels, put=__cordl_internal_set_toPixels)) ::ArrayW<::UnityEngine::Color>  toPixels;

/// @brief Field working, offset 0x81, size 0x1 
 __declspec(property(get=__cordl_internal_get_working, put=__cordl_internal_set_working)) bool  working;

/// @brief Field workingLightMapData, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_workingLightMapData, put=__cordl_internal_set_workingLightMapData)) ::UnityEngine::LightmapData*  workingLightMapData;

/// @brief Field workingLightMapDatas, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_workingLightMapDatas, put=__cordl_internal_set_workingLightMapDatas)) ::ArrayW<::UnityEngine::LightmapData*>  workingLightMapDatas;

/// @brief Method Awake, addr 0x59043a8, size 0x214, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DoDirsStep, addr 0x5904bb0, size 0x190, virtual false, abstract: false, final false
inline void DoDirsStep() ;

/// @brief Method DoLightsStep, addr 0x5904a20, size 0x190, virtual false, abstract: false, final false
inline void DoLightsStep() ;

/// @brief Method DoWork, addr 0x590468c, size 0x394, virtual false, abstract: false, final false
inline void DoWork() ;

/// [IteratorStateMachine(typeof(GorillaDayNight::<LightMapSet>d__25))]
/// @brief Method LightMapSet, addr 0x59045f4, size 0x98, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* LightMapSet(int32_t  setFirstData, int32_t  setSecondData, float_t  setLerp) ;

static inline ::GlobalNamespace::GorillaDayNight* New_ctor() ;

/// @brief Method Update, addr 0x59045bc, size 0x38, virtual false, abstract: false, final false
inline void Update() ;

/// [CompilerGenerated]
/// @brief Method <LightMapSet>b__25_0, addr 0x5904d48, size 0x8, virtual false, abstract: false, final false
inline bool _LightMapSet_b__25_0() ;

/// [CompilerGenerated]
/// @brief Method <LightMapSet>b__25_1, addr 0x5904d50, size 0x814, virtual false, abstract: false, final false
inline bool _LightMapSet_b__25_1() ;

constexpr ::System::Threading::Thread* const& __cordl_internal_get_dirsThread() const;

constexpr ::System::Threading::Thread*& __cordl_internal_get_dirsThread() ;

constexpr bool const& __cordl_internal_get_done() const;

constexpr bool& __cordl_internal_get_done() ;

constexpr bool const& __cordl_internal_get_finishedStep() const;

constexpr bool& __cordl_internal_get_finishedStep() ;

constexpr int32_t const& __cordl_internal_get_firstData() const;

constexpr int32_t& __cordl_internal_get_firstData() ;

constexpr ::ArrayW<::UnityEngine::Color> const& __cordl_internal_get_fromPixels() const;

constexpr ::ArrayW<::UnityEngine::Color>& __cordl_internal_get_fromPixels() ;

constexpr int32_t const& __cordl_internal_get_i() const;

constexpr int32_t& __cordl_internal_get_i() ;

constexpr int32_t const& __cordl_internal_get_j() const;

constexpr int32_t& __cordl_internal_get_j() ;

constexpr int32_t const& __cordl_internal_get_k() const;

constexpr int32_t& __cordl_internal_get_k() ;

constexpr int32_t const& __cordl_internal_get_l() const;

constexpr int32_t& __cordl_internal_get_l() ;

constexpr float_t const& __cordl_internal_get_lerpValue() const;

constexpr float_t& __cordl_internal_get_lerpValue() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaLightmapData>> const& __cordl_internal_get_lightmapDatas() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaLightmapData>>& __cordl_internal_get_lightmapDatas() ;

constexpr ::System::Threading::Thread* const& __cordl_internal_get_lightsThread() const;

constexpr ::System::Threading::Thread*& __cordl_internal_get_lightsThread() ;

constexpr ::ArrayW<::UnityEngine::Color> const& __cordl_internal_get_mixedPixels() const;

constexpr ::ArrayW<::UnityEngine::Color>& __cordl_internal_get_mixedPixels() ;

constexpr int32_t const& __cordl_internal_get_secondData() const;

constexpr int32_t& __cordl_internal_get_secondData() ;

constexpr bool const& __cordl_internal_get_test() const;

constexpr bool& __cordl_internal_get_test() ;

constexpr ::ArrayW<::UnityEngine::Color> const& __cordl_internal_get_toPixels() const;

constexpr ::ArrayW<::UnityEngine::Color>& __cordl_internal_get_toPixels() ;

constexpr bool const& __cordl_internal_get_working() const;

constexpr bool& __cordl_internal_get_working() ;

constexpr ::UnityEngine::LightmapData* const& __cordl_internal_get_workingLightMapData() const;

constexpr ::UnityEngine::LightmapData*& __cordl_internal_get_workingLightMapData() ;

constexpr ::ArrayW<::UnityEngine::LightmapData*> const& __cordl_internal_get_workingLightMapDatas() const;

constexpr ::ArrayW<::UnityEngine::LightmapData*>& __cordl_internal_get_workingLightMapDatas() ;

constexpr void __cordl_internal_set_dirsThread(::System::Threading::Thread*  value) ;

constexpr void __cordl_internal_set_done(bool  value) ;

constexpr void __cordl_internal_set_finishedStep(bool  value) ;

constexpr void __cordl_internal_set_firstData(int32_t  value) ;

constexpr void __cordl_internal_set_fromPixels(::ArrayW<::UnityEngine::Color>  value) ;

constexpr void __cordl_internal_set_i(int32_t  value) ;

constexpr void __cordl_internal_set_j(int32_t  value) ;

constexpr void __cordl_internal_set_k(int32_t  value) ;

constexpr void __cordl_internal_set_l(int32_t  value) ;

constexpr void __cordl_internal_set_lerpValue(float_t  value) ;

constexpr void __cordl_internal_set_lightmapDatas(::ArrayW<::UnityW<::GlobalNamespace::GorillaLightmapData>>  value) ;

constexpr void __cordl_internal_set_lightsThread(::System::Threading::Thread*  value) ;

constexpr void __cordl_internal_set_mixedPixels(::ArrayW<::UnityEngine::Color>  value) ;

constexpr void __cordl_internal_set_secondData(int32_t  value) ;

constexpr void __cordl_internal_set_test(bool  value) ;

constexpr void __cordl_internal_set_toPixels(::ArrayW<::UnityEngine::Color>  value) ;

constexpr void __cordl_internal_set_working(bool  value) ;

constexpr void __cordl_internal_set_workingLightMapData(::UnityEngine::LightmapData*  value) ;

constexpr void __cordl_internal_set_workingLightMapDatas(::ArrayW<::UnityEngine::LightmapData*>  value) ;

/// @brief Method .ctor, addr 0x5904d40, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::GorillaDayNight> getStaticF_instance() ;

static inline void setStaticF_instance(::UnityW<::GlobalNamespace::GorillaDayNight>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaDayNight() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaDayNight", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaDayNight(GorillaDayNight && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaDayNight", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaDayNight(GorillaDayNight const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2159};

/// @brief Field lightmapDatas, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::GorillaLightmapData>>  ___lightmapDatas;

/// @brief Field workingLightMapDatas, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::LightmapData*>  ___workingLightMapDatas;

/// @brief Field workingLightMapData, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::LightmapData*  ___workingLightMapData;

/// @brief Field lerpValue, offset: 0x38, size: 0x4, def value: None
 float_t  ___lerpValue;

/// @brief Field done, offset: 0x3c, size: 0x1, def value: None
 bool  ___done;

/// @brief Field finishedStep, offset: 0x3d, size: 0x1, def value: None
 bool  ___finishedStep;

/// @brief Field fromPixels, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Color>  ___fromPixels;

/// @brief Field toPixels, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Color>  ___toPixels;

/// @brief Field mixedPixels, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Color>  ___mixedPixels;

/// @brief Field firstData, offset: 0x58, size: 0x4, def value: None
 int32_t  ___firstData;

/// @brief Field secondData, offset: 0x5c, size: 0x4, def value: None
 int32_t  ___secondData;

/// @brief Field i, offset: 0x60, size: 0x4, def value: None
 int32_t  ___i;

/// @brief Field j, offset: 0x64, size: 0x4, def value: None
 int32_t  ___j;

/// @brief Field k, offset: 0x68, size: 0x4, def value: None
 int32_t  ___k;

/// @brief Field l, offset: 0x6c, size: 0x4, def value: None
 int32_t  ___l;

/// @brief Field lightsThread, offset: 0x70, size: 0x8, def value: None
 ::System::Threading::Thread*  ___lightsThread;

/// @brief Field dirsThread, offset: 0x78, size: 0x8, def value: None
 ::System::Threading::Thread*  ___dirsThread;

/// @brief Field test, offset: 0x80, size: 0x1, def value: None
 bool  ___test;

/// @brief Field working, offset: 0x81, size: 0x1, def value: None
 bool  ___working;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaDayNight, ___lightmapDatas) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaDayNight, ___workingLightMapDatas) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaDayNight, ___workingLightMapData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaDayNight, ___lerpValue) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaDayNight, ___done) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaDayNight, ___finishedStep) == 0x3d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaDayNight, ___fromPixels) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaDayNight, ___toPixels) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaDayNight, ___mixedPixels) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaDayNight, ___firstData) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaDayNight, ___secondData) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaDayNight, ___i) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaDayNight, ___j) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaDayNight, ___k) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaDayNight, ___l) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaDayNight, ___lightsThread) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaDayNight, ___dirsThread) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaDayNight, ___test) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaDayNight, ___working) == 0x81, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaDayNight) == 0x88, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaDayNight/<LightMapSet>d__25
class CORDL_TYPE GorillaDayNight__LightMapSet_d__25 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::GorillaDayNight>  __4__this;

/// @brief Field setFirstData, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_setFirstData, put=__cordl_internal_set_setFirstData)) int32_t  setFirstData;

/// @brief Field setLerp, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_setLerp, put=__cordl_internal_set_setLerp)) float_t  setLerp;

/// @brief Field setSecondData, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_setSecondData, put=__cordl_internal_set_setSecondData)) int32_t  setSecondData;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5905590, size 0x3cc, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::GorillaDayNight__LightMapSet_d__25* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x590595c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5905964, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x590599c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x590558c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::GorillaDayNight> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::GorillaDayNight>& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get_setFirstData() const;

constexpr int32_t& __cordl_internal_get_setFirstData() ;

constexpr float_t const& __cordl_internal_get_setLerp() const;

constexpr float_t& __cordl_internal_get_setLerp() ;

constexpr int32_t const& __cordl_internal_get_setSecondData() const;

constexpr int32_t& __cordl_internal_get_setSecondData() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GorillaDayNight>  value) ;

constexpr void __cordl_internal_set_setFirstData(int32_t  value) ;

constexpr void __cordl_internal_set_setLerp(float_t  value) ;

constexpr void __cordl_internal_set_setSecondData(int32_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5905564, size 0x28, virtual false, abstract: false, final false
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
constexpr GorillaDayNight__LightMapSet_d__25() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaDayNight__LightMapSet_d__25", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaDayNight__LightMapSet_d__25(GorillaDayNight__LightMapSet_d__25 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaDayNight__LightMapSet_d__25", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaDayNight__LightMapSet_d__25(GorillaDayNight__LightMapSet_d__25 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2158};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaDayNight>  _____4__this;

/// @brief Field setFirstData, offset: 0x28, size: 0x4, def value: None
 int32_t  ___setFirstData;

/// @brief Field setSecondData, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___setSecondData;

/// @brief Field setLerp, offset: 0x30, size: 0x4, def value: None
 float_t  ___setLerp;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaDayNight__LightMapSet_d__25, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaDayNight__LightMapSet_d__25, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaDayNight__LightMapSet_d__25, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaDayNight__LightMapSet_d__25, ___setFirstData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaDayNight__LightMapSet_d__25, ___setSecondData) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaDayNight__LightMapSet_d__25, ___setLerp) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaDayNight__LightMapSet_d__25) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
