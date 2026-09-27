#pragma once
// IWYU pragma private; include "UnityEngine/Playables/PlayableSystems.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayableSystems)
namespace GlobalNamespace {
struct PlayableSystems_PlayableSystemStage;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyCollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Threading {
class ReaderWriterLockSlim;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::Playables {
class DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator;
}
namespace UnityEngine::Playables {
struct DataPlayableOutput;
}
namespace UnityEngine::Playables {
struct PlayableOutputHandle;
}
namespace UnityEngine::Playables {
class PlayableSystems_DataPlayableOutputList;
}
namespace UnityEngine::Playables {
class PlayableSystems_PlayableSystemDelegate;
}
// Forward declare root types
namespace UnityEngine::Playables {
class DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator;
}
namespace UnityEngine::Playables {
class PlayableSystems;
}
namespace UnityEngine::Playables {
class PlayableSystems_DataPlayableOutputList;
}
namespace UnityEngine::Playables {
class PlayableSystems_PlayableSystemDelegate;
}
// Write type traits
MARK_REF_T(::UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator*);
MARK_REF_T(::UnityEngine::Playables::PlayableSystems*);
MARK_REF_T(::UnityEngine::Playables::PlayableSystems_DataPlayableOutputList*);
MARK_REF_T(::UnityEngine::Playables::PlayableSystems_PlayableSystemDelegate*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator*, "UnityEngine.Playables", "PlayableSystems/DataPlayableOutputList/DataPlayableOutputEnumerator");
DEFINE_IL2CPP_CLASS(::UnityEngine::Playables::PlayableSystems*, "UnityEngine.Playables", "PlayableSystems");
DEFINE_IL2CPP_CLASS(::UnityEngine::Playables::PlayableSystems_DataPlayableOutputList*, "UnityEngine.Playables", "PlayableSystems/DataPlayableOutputList");
DEFINE_IL2CPP_CLASS(::UnityEngine::Playables::PlayableSystems_PlayableSystemDelegate*, "UnityEngine.Playables", "PlayableSystems/PlayableSystemDelegate");
// [NativeHeader("Modules/Director/ScriptBindings/PlayableSystems.bindings.h")]
// [StaticAccessor("PlayableSystemsBindings", (UnityEngine.Bindings.StaticAccessorType)2)]
// Dependencies System.Object
namespace UnityEngine::Playables {
// Is value type: false
// CS Name: UnityEngine.Playables.PlayableSystems
class CORDL_TYPE PlayableSystems : public ::System::Object {
public:
// Declarations
using PlayableSystemStage = ::GlobalNamespace::PlayableSystems_PlayableSystemStage;

using DataPlayableOutputList = ::UnityEngine::Playables::PlayableSystems_DataPlayableOutputList;

using PlayableSystemDelegate = ::UnityEngine::Playables::PlayableSystems_PlayableSystemDelegate;

/// @brief Field s_Delegates, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegates, put=setStaticF_s_Delegates)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Playables::PlayableSystems_PlayableSystemDelegate*>*  s_Delegates;

/// @brief Field s_RWLock, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_RWLock, put=setStaticF_s_RWLock)) ::System::Threading::ReaderWriterLockSlim*  s_RWLock;

/// @brief Field s_SystemTypes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_SystemTypes, put=setStaticF_s_SystemTypes)) ::System::Collections::Generic::Dictionary_2<int32_t,::System::Type*>*  s_SystemTypes;

/// @brief Method CombineTypeAndIndex, addr 0xb631e58, size 0xc, virtual false, abstract: false, final false
static inline int32_t CombineTypeAndIndex(int32_t  typeIndex, ::GlobalNamespace::PlayableSystems_PlayableSystemStage  stage) ;

/// [RequiredByNativeCode]
/// @brief Method Internal_CallSystemDelegate, addr 0xb631e64, size 0x1c4, virtual false, abstract: false, final false
static inline bool Internal_CallSystemDelegate(int32_t  systemIndex, ::GlobalNamespace::PlayableSystems_PlayableSystemStage  stage, ::System::IntPtr  outputsPtr, int32_t  numOutputs) ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Playables::PlayableSystems_PlayableSystemDelegate*>* getStaticF_s_Delegates() ;

static inline ::System::Threading::ReaderWriterLockSlim* getStaticF_s_RWLock() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::System::Type*>* getStaticF_s_SystemTypes() ;

static inline void setStaticF_s_Delegates(::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Playables::PlayableSystems_PlayableSystemDelegate*>*  value) ;

static inline void setStaticF_s_RWLock(::System::Threading::ReaderWriterLockSlim*  value) ;

static inline void setStaticF_s_SystemTypes(::System::Collections::Generic::Dictionary_2<int32_t,::System::Type*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayableSystems() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayableSystems", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayableSystems(PlayableSystems && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayableSystems", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayableSystems(PlayableSystems const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32649};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Playables::PlayableSystems) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Playables
// [DefaultMember("Item")]
// Dependencies System.Object
namespace UnityEngine::Playables {
// Is value type: false
// CS Name: UnityEngine.Playables.PlayableSystems/DataPlayableOutputList
class CORDL_TYPE PlayableSystems_DataPlayableOutputList : public ::System::Object {
public:
// Declarations
using DataPlayableOutputEnumerator = ::UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Item)) ::UnityEngine::Playables::DataPlayableOutput  Item[];

/// @brief Field m_Count, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Count, put=__cordl_internal_set_m_Count)) int32_t  m_Count;

/// @brief Field m_Outputs, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Outputs, put=__cordl_internal_set_m_Outputs)) ::UnityEngine::Playables::PlayableOutputHandle*  m_Outputs;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::DataPlayableOutput>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::DataPlayableOutput>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Playables::DataPlayableOutput>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Playables::DataPlayableOutput>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Playables::DataPlayableOutput>"
constexpr operator  ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Playables::DataPlayableOutput>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method GetEnumerator, addr 0xb6323cc, size 0x70, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::DataPlayableOutput>* GetEnumerator() ;

static inline ::UnityEngine::Playables::PlayableSystems_DataPlayableOutputList* New_ctor(::UnityEngine::Playables::PlayableOutputHandle*  outputs, int32_t  count) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xb632478, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

constexpr int32_t const& __cordl_internal_get_m_Count() const;

constexpr int32_t& __cordl_internal_get_m_Count() ;

constexpr ::UnityEngine::Playables::PlayableOutputHandle* const& __cordl_internal_get_m_Outputs() const;

constexpr ::UnityEngine::Playables::PlayableOutputHandle*& __cordl_internal_get_m_Outputs() ;

constexpr void __cordl_internal_set_m_Count(int32_t  value) ;

constexpr void __cordl_internal_set_m_Outputs(::UnityEngine::Playables::PlayableOutputHandle*  value) ;

/// @brief Method .ctor, addr 0xb632028, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Playables::PlayableOutputHandle*  outputs, int32_t  count) ;

/// @brief Method get_Count, addr 0xb6323c4, size 0x8, virtual true, abstract: false, final true
inline int32_t get_Count() ;

/// @brief Method get_Item, addr 0xb6322a0, size 0x124, virtual true, abstract: false, final true
inline ::UnityEngine::Playables::DataPlayableOutput get_Item(int32_t  index) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::DataPlayableOutput>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::DataPlayableOutput>* i___System__Collections__Generic__IEnumerable_1___UnityEngine__Playables__DataPlayableOutput_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Playables::DataPlayableOutput>"
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Playables::DataPlayableOutput>* i___System__Collections__Generic__IReadOnlyCollection_1___UnityEngine__Playables__DataPlayableOutput_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Playables::DataPlayableOutput>"
constexpr ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Playables::DataPlayableOutput>* i___System__Collections__Generic__IReadOnlyList_1___UnityEngine__Playables__DataPlayableOutput_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayableSystems_DataPlayableOutputList() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayableSystems_DataPlayableOutputList", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayableSystems_DataPlayableOutputList(PlayableSystems_DataPlayableOutputList && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayableSystems_DataPlayableOutputList", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayableSystems_DataPlayableOutputList(PlayableSystems_DataPlayableOutputList const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32648};

/// @brief Field m_Outputs, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Playables::PlayableOutputHandle*  ___m_Outputs;

/// @brief Field m_Count, offset: 0x18, size: 0x4, def value: None
 int32_t  ___m_Count;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Playables::PlayableSystems_DataPlayableOutputList, ___m_Outputs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Playables::PlayableSystems_DataPlayableOutputList, ___m_Count) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Playables::PlayableSystems_DataPlayableOutputList) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Playables
// Dependencies System.Object
namespace UnityEngine::Playables {
// Is value type: false
// CS Name: UnityEngine.Playables.PlayableSystems/DataPlayableOutputList/DataPlayableOutputEnumerator
class CORDL_TYPE DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Current)) ::UnityEngine::Playables::DataPlayableOutput  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field m_Index, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Index, put=__cordl_internal_set_m_Index)) int32_t  m_Index;

/// @brief Field m_List, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_List, put=__cordl_internal_set_m_List)) ::UnityEngine::Playables::PlayableSystems_DataPlayableOutputList*  m_List;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::DataPlayableOutput>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::DataPlayableOutput>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0xb6325bc, size 0xc, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method MoveNext, addr 0xb6325c8, size 0x2c, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator* New_ctor(::UnityEngine::Playables::PlayableSystems_DataPlayableOutputList*  list) ;

/// @brief Method Reset, addr 0xb6325f4, size 0xc, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xb632558, size 0x64, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

constexpr int32_t const& __cordl_internal_get_m_Index() const;

constexpr int32_t& __cordl_internal_get_m_Index() ;

constexpr ::UnityEngine::Playables::PlayableSystems_DataPlayableOutputList* const& __cordl_internal_get_m_List() const;

constexpr ::UnityEngine::Playables::PlayableSystems_DataPlayableOutputList*& __cordl_internal_get_m_List() ;

constexpr void __cordl_internal_set_m_Index(int32_t  value) ;

constexpr void __cordl_internal_set_m_List(::UnityEngine::Playables::PlayableSystems_DataPlayableOutputList*  value) ;

/// @brief Method .ctor, addr 0xb63243c, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Playables::PlayableSystems_DataPlayableOutputList*  list) ;

/// @brief Method get_Current, addr 0xb63247c, size 0xdc, virtual true, abstract: false, final true
inline ::UnityEngine::Playables::DataPlayableOutput get_Current() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::DataPlayableOutput>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::DataPlayableOutput>* i___System__Collections__Generic__IEnumerator_1___UnityEngine__Playables__DataPlayableOutput_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator(DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator(DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32647};

/// @brief Field m_List, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Playables::PlayableSystems_DataPlayableOutputList*  ___m_List;

/// @brief Field m_Index, offset: 0x18, size: 0x4, def value: None
 int32_t  ___m_Index;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator, ___m_List) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator, ___m_Index) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Playables::DataPlayableOutputList_PlayableSystems_DataPlayableOutputEnumerator) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Playables
// Dependencies System.MulticastDelegate
namespace UnityEngine::Playables {
// Is value type: false
// CS Name: UnityEngine.Playables.PlayableSystems/PlayableSystemDelegate
class CORDL_TYPE PlayableSystems_PlayableSystemDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xb63228c, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Playables::DataPlayableOutput>*  outputs) ;

static inline ::UnityEngine::Playables::PlayableSystems_PlayableSystemDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xb632184, size 0x108, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayableSystems_PlayableSystemDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayableSystems_PlayableSystemDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayableSystems_PlayableSystemDelegate(PlayableSystems_PlayableSystemDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayableSystems_PlayableSystemDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayableSystems_PlayableSystemDelegate(PlayableSystems_PlayableSystemDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32645};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Playables::PlayableSystems_PlayableSystemDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::Playables
