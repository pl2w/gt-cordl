#pragma once
// IWYU pragma private; include "GlobalNamespace/CodeRedemption.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CodeRedemption)
namespace GlobalNamespace {
class CodeRedemption_CodeRedemptionRequest;
}
namespace GlobalNamespace {
class CodeRedemption_CodeRedemptionResponse;
}
namespace GlobalNamespace {
class CodeRedemption__CheckProcessExternalUnlock_d__7;
}
namespace GlobalNamespace {
class CodeRedemption__ProcessWebRequest_d__8;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
// Forward declare root types
namespace GlobalNamespace {
class CodeRedemption;
}
namespace GlobalNamespace {
class CodeRedemption_CodeRedemptionRequest;
}
namespace GlobalNamespace {
class CodeRedemption_CodeRedemptionResponse;
}
namespace GlobalNamespace {
class CodeRedemption__CheckProcessExternalUnlock_d__7;
}
namespace GlobalNamespace {
class CodeRedemption__ProcessWebRequest_d__8;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CodeRedemption*);
MARK_REF_T(::GlobalNamespace::CodeRedemption_CodeRedemptionRequest*);
MARK_REF_T(::GlobalNamespace::CodeRedemption_CodeRedemptionResponse*);
MARK_REF_T(::GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7*);
MARK_REF_T(::GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CodeRedemption*, "", "CodeRedemption");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CodeRedemption_CodeRedemptionRequest*, "", "CodeRedemption/CodeRedemptionRequest");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CodeRedemption_CodeRedemptionResponse*, "", "CodeRedemption/CodeRedemptionResponse");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7*, "", "CodeRedemption/<CheckProcessExternalUnlock>d__7");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8*, "", "CodeRedemption/<ProcessWebRequest>d__8");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CodeRedemption
class CORDL_TYPE CodeRedemption : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using CodeRedemptionRequest = ::GlobalNamespace::CodeRedemption_CodeRedemptionRequest;

using CodeRedemptionResponse = ::GlobalNamespace::CodeRedemption_CodeRedemptionResponse;

using _CheckProcessExternalUnlock_d__7 = ::GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7;

using _ProcessWebRequest_d__8 = ::GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8;

/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::UnityW<::GlobalNamespace::CodeRedemption>  Instance;

/// @brief Method Awake, addr 0x574fa24, size 0x118, virtual false, abstract: false, final false
inline void Awake() ;

/// [IteratorStateMachine(typeof(CodeRedemption::<CheckProcessExternalUnlock>d__7))]
/// @brief Method CheckProcessExternalUnlock, addr 0x57506cc, size 0x8c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* CheckProcessExternalUnlock(::ArrayW<::StringW>  itemIDs, bool  autoEquip, bool  isLeftHand, bool  destroyOnFinish) ;

/// @brief Method HandleCodeRedemption, addr 0x574fb3c, size 0x2c8, virtual false, abstract: false, final false
inline void HandleCodeRedemption(::StringW  code) ;

static inline ::GlobalNamespace::CodeRedemption* New_ctor() ;

/// @brief Method OnCodeRedemptionResponse, addr 0x574fec4, size 0x808, virtual false, abstract: false, final false
inline void OnCodeRedemptionResponse(::UnityEngine::Networking::UnityWebRequest*  completedRequest) ;

/// [IteratorStateMachine(typeof(CodeRedemption::<ProcessWebRequest>d__8))]
/// @brief Method ProcessWebRequest, addr 0x574fe0c, size 0xb8, virtual false, abstract: false, final false
static inline ::System::Collections::IEnumerator* ProcessWebRequest(::StringW  url, ::StringW  data, ::StringW  contentType, ::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*  callback) ;

/// @brief Method .ctor, addr 0x57507a8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::CodeRedemption> getStaticF_Instance() ;

static inline void setStaticF_Instance(::UnityW<::GlobalNamespace::CodeRedemption>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CodeRedemption() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CodeRedemption", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CodeRedemption(CodeRedemption && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CodeRedemption", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CodeRedemption(CodeRedemption const& ) = delete;

/// @brief Field HiddenPathCollabEndpoint offset 0xffffffff size 0x8
static constexpr ::ConstString  HiddenPathCollabEndpoint{u"/api/ConsumeCodeItem"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1309};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::CodeRedemption) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CodeRedemption/<ProcessWebRequest>d__8
class CORDL_TYPE CodeRedemption__ProcessWebRequest_d__8 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <request>5__2, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__request_5__2, put=__cordl_internal_set__request_5__2)) ::UnityEngine::Networking::UnityWebRequest*  _request_5__2;

/// @brief Field callback, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_callback, put=__cordl_internal_set_callback)) ::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*  callback;

/// @brief Field contentType, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_contentType, put=__cordl_internal_set_contentType)) ::StringW  contentType;

/// @brief Field data, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::StringW  data;

/// @brief Field url, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_url, put=__cordl_internal_set_url)) ::StringW  url;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x57509c4, size 0xb0, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5750a74, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5750a7c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5750ab4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x57509c0, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get__request_5__2() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get__request_5__2() ;

constexpr ::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>* const& __cordl_internal_get_callback() const;

constexpr ::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*& __cordl_internal_get_callback() ;

constexpr ::StringW const& __cordl_internal_get_contentType() const;

constexpr ::StringW& __cordl_internal_get_contentType() ;

constexpr ::StringW const& __cordl_internal_get_data() const;

constexpr ::StringW& __cordl_internal_get_data() ;

constexpr ::StringW const& __cordl_internal_get_url() const;

constexpr ::StringW& __cordl_internal_get_url() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value) ;

constexpr void __cordl_internal_set_callback(::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*  value) ;

constexpr void __cordl_internal_set_contentType(::StringW  value) ;

constexpr void __cordl_internal_set_data(::StringW  value) ;

constexpr void __cordl_internal_set_url(::StringW  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5750780, size 0x28, virtual false, abstract: false, final false
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
constexpr CodeRedemption__ProcessWebRequest_d__8() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CodeRedemption__ProcessWebRequest_d__8", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CodeRedemption__ProcessWebRequest_d__8(CodeRedemption__ProcessWebRequest_d__8 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CodeRedemption__ProcessWebRequest_d__8", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CodeRedemption__ProcessWebRequest_d__8(CodeRedemption__ProcessWebRequest_d__8 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1308};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field url, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___url;

/// @brief Field data, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___data;

/// @brief Field contentType, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___contentType;

/// @brief Field callback, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*  ___callback;

/// @brief Field <request>5__2, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ____request_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8, ___url) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8, ___data) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8, ___contentType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8, ___callback) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8, ____request_5__2) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CodeRedemption/<CheckProcessExternalUnlock>d__7
class CORDL_TYPE CodeRedemption__CheckProcessExternalUnlock_d__7 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field autoEquip, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_autoEquip, put=__cordl_internal_set_autoEquip)) bool  autoEquip;

/// @brief Field isLeftHand, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_isLeftHand, put=__cordl_internal_set_isLeftHand)) bool  isLeftHand;

/// @brief Field itemIDs, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_itemIDs, put=__cordl_internal_set_itemIDs)) ::ArrayW<::StringW>  itemIDs;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x57507bc, size 0x1bc, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5750978, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5750980, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x57509b8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x57507b8, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr bool const& __cordl_internal_get_autoEquip() const;

constexpr bool& __cordl_internal_get_autoEquip() ;

constexpr bool const& __cordl_internal_get_isLeftHand() const;

constexpr bool& __cordl_internal_get_isLeftHand() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_itemIDs() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_itemIDs() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set_autoEquip(bool  value) ;

constexpr void __cordl_internal_set_isLeftHand(bool  value) ;

constexpr void __cordl_internal_set_itemIDs(::ArrayW<::StringW>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5750758, size 0x28, virtual false, abstract: false, final false
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
constexpr CodeRedemption__CheckProcessExternalUnlock_d__7() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CodeRedemption__CheckProcessExternalUnlock_d__7", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CodeRedemption__CheckProcessExternalUnlock_d__7(CodeRedemption__CheckProcessExternalUnlock_d__7 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CodeRedemption__CheckProcessExternalUnlock_d__7", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CodeRedemption__CheckProcessExternalUnlock_d__7(CodeRedemption__CheckProcessExternalUnlock_d__7 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1307};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field itemIDs, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___itemIDs;

/// @brief Field autoEquip, offset: 0x28, size: 0x1, def value: None
 bool  ___autoEquip;

/// @brief Field isLeftHand, offset: 0x29, size: 0x1, def value: None
 bool  ___isLeftHand;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7, ___itemIDs) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7, ___autoEquip) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7, ___isLeftHand) == 0x29, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.DateTimeOffset, System.Nullable`1<T>, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CodeRedemption/CodeRedemptionResponse
class CORDL_TYPE CodeRedemption_CodeRedemptionResponse : public ::System::Object {
public:
// Declarations
/// @brief Field endTime, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_endTime, put=__cordl_internal_set_endTime)) ::System::Nullable_1<::System::DateTimeOffset>  endTime;

/// @brief Field itemID, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_itemID, put=__cordl_internal_set_itemID)) ::StringW  itemID;

/// @brief Field playFabItemName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_playFabItemName, put=__cordl_internal_set_playFabItemName)) ::StringW  playFabItemName;

/// @brief Field result, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_result, put=__cordl_internal_set_result)) ::StringW  result;

/// @brief Field startTime, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_startTime, put=__cordl_internal_set_startTime)) ::System::Nullable_1<::System::DateTimeOffset>  startTime;

static inline ::GlobalNamespace::CodeRedemption_CodeRedemptionResponse* New_ctor() ;

constexpr ::System::Nullable_1<::System::DateTimeOffset> const& __cordl_internal_get_endTime() const;

constexpr ::System::Nullable_1<::System::DateTimeOffset>& __cordl_internal_get_endTime() ;

constexpr ::StringW const& __cordl_internal_get_itemID() const;

constexpr ::StringW& __cordl_internal_get_itemID() ;

constexpr ::StringW const& __cordl_internal_get_playFabItemName() const;

constexpr ::StringW& __cordl_internal_get_playFabItemName() ;

constexpr ::StringW const& __cordl_internal_get_result() const;

constexpr ::StringW& __cordl_internal_get_result() ;

constexpr ::System::Nullable_1<::System::DateTimeOffset> const& __cordl_internal_get_startTime() const;

constexpr ::System::Nullable_1<::System::DateTimeOffset>& __cordl_internal_get_startTime() ;

constexpr void __cordl_internal_set_endTime(::System::Nullable_1<::System::DateTimeOffset>  value) ;

constexpr void __cordl_internal_set_itemID(::StringW  value) ;

constexpr void __cordl_internal_set_playFabItemName(::StringW  value) ;

constexpr void __cordl_internal_set_result(::StringW  value) ;

constexpr void __cordl_internal_set_startTime(::System::Nullable_1<::System::DateTimeOffset>  value) ;

/// @brief Method .ctor, addr 0x57507b0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CodeRedemption_CodeRedemptionResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CodeRedemption_CodeRedemptionResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CodeRedemption_CodeRedemptionResponse(CodeRedemption_CodeRedemptionResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CodeRedemption_CodeRedemptionResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CodeRedemption_CodeRedemptionResponse(CodeRedemption_CodeRedemptionResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1306};

/// @brief Field result, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___result;

/// @brief Field itemID, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___itemID;

/// @brief Field playFabItemName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___playFabItemName;

/// @brief Field startTime, offset: 0x28, size: 0x10, def value: None
 ::System::Nullable_1<::System::DateTimeOffset>  ___startTime;

/// @brief Field endTime, offset: 0x38, size: 0x10, def value: None
 ::System::Nullable_1<::System::DateTimeOffset>  ___endTime;

/// @brief Size padding 0x58 - 0x48 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CodeRedemption_CodeRedemptionResponse, ___result) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CodeRedemption_CodeRedemptionResponse, ___itemID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CodeRedemption_CodeRedemptionResponse, ___playFabItemName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CodeRedemption_CodeRedemptionResponse, ___startTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CodeRedemption_CodeRedemptionResponse, ___endTime) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CodeRedemption_CodeRedemptionResponse) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CodeRedemption/CodeRedemptionRequest
class CORDL_TYPE CodeRedemption_CodeRedemptionRequest : public ::System::Object {
public:
// Declarations
/// @brief Field itemGUID, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_itemGUID, put=__cordl_internal_set_itemGUID)) ::StringW  itemGUID;

/// @brief Field mothershipEnvId, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_mothershipEnvId, put=__cordl_internal_set_mothershipEnvId)) ::StringW  mothershipEnvId;

/// @brief Field mothershipId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_mothershipId, put=__cordl_internal_set_mothershipId)) ::StringW  mothershipId;

/// @brief Field mothershipToken, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_mothershipToken, put=__cordl_internal_set_mothershipToken)) ::StringW  mothershipToken;

/// @brief Field playFabID, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_playFabID, put=__cordl_internal_set_playFabID)) ::StringW  playFabID;

/// @brief Field playFabSessionTicket, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_playFabSessionTicket, put=__cordl_internal_set_playFabSessionTicket)) ::StringW  playFabSessionTicket;

static inline ::GlobalNamespace::CodeRedemption_CodeRedemptionRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_itemGUID() const;

constexpr ::StringW& __cordl_internal_get_itemGUID() ;

constexpr ::StringW const& __cordl_internal_get_mothershipEnvId() const;

constexpr ::StringW& __cordl_internal_get_mothershipEnvId() ;

constexpr ::StringW const& __cordl_internal_get_mothershipId() const;

constexpr ::StringW& __cordl_internal_get_mothershipId() ;

constexpr ::StringW const& __cordl_internal_get_mothershipToken() const;

constexpr ::StringW& __cordl_internal_get_mothershipToken() ;

constexpr ::StringW const& __cordl_internal_get_playFabID() const;

constexpr ::StringW& __cordl_internal_get_playFabID() ;

constexpr ::StringW const& __cordl_internal_get_playFabSessionTicket() const;

constexpr ::StringW& __cordl_internal_get_playFabSessionTicket() ;

constexpr void __cordl_internal_set_itemGUID(::StringW  value) ;

constexpr void __cordl_internal_set_mothershipEnvId(::StringW  value) ;

constexpr void __cordl_internal_set_mothershipId(::StringW  value) ;

constexpr void __cordl_internal_set_mothershipToken(::StringW  value) ;

constexpr void __cordl_internal_set_playFabID(::StringW  value) ;

constexpr void __cordl_internal_set_playFabSessionTicket(::StringW  value) ;

/// @brief Method .ctor, addr 0x574fe04, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CodeRedemption_CodeRedemptionRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CodeRedemption_CodeRedemptionRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CodeRedemption_CodeRedemptionRequest(CodeRedemption_CodeRedemptionRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CodeRedemption_CodeRedemptionRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CodeRedemption_CodeRedemptionRequest(CodeRedemption_CodeRedemptionRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1305};

/// @brief Field itemGUID, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___itemGUID;

/// @brief Field playFabID, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___playFabID;

/// @brief Field playFabSessionTicket, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___playFabSessionTicket;

/// @brief Field mothershipId, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___mothershipId;

/// @brief Field mothershipToken, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___mothershipToken;

/// @brief Field mothershipEnvId, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___mothershipEnvId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CodeRedemption_CodeRedemptionRequest, ___itemGUID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CodeRedemption_CodeRedemptionRequest, ___playFabID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CodeRedemption_CodeRedemptionRequest, ___playFabSessionTicket) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CodeRedemption_CodeRedemptionRequest, ___mothershipId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CodeRedemption_CodeRedemptionRequest, ___mothershipToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CodeRedemption_CodeRedemptionRequest, ___mothershipEnvId) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CodeRedemption_CodeRedemptionRequest) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
