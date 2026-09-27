#pragma once
// IWYU pragma private; include "Meta/WitAi/Requests/TextStreamHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/Networking/zzzz__DownloadHandlerScript_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TextStreamHandler)
namespace Meta::WitAi::Requests {
class IVRequestDownloadDecoder;
}
namespace Meta::WitAi::Requests {
class TextStreamHandler_TextStreamResponseDelegate;
}
namespace Meta::WitAi::Requests {
class VRequestProgressDelegate;
}
namespace Meta::WitAi::Requests {
class VRequestResponseDelegate;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Meta::WitAi::Requests {
class TextStreamHandler;
}
namespace Meta::WitAi::Requests {
class TextStreamHandler_TextStreamResponseDelegate;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Requests::TextStreamHandler*);
MARK_REF_T(::Meta::WitAi::Requests::TextStreamHandler_TextStreamResponseDelegate*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Requests::TextStreamHandler*, "Meta.WitAi.Requests", "TextStreamHandler");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Requests::TextStreamHandler_TextStreamResponseDelegate*, "Meta.WitAi.Requests", "TextStreamHandler/TextStreamResponseDelegate");
// Dependencies UnityEngine.Networking.DownloadHandlerScript
namespace Meta::WitAi::Requests {
// Is value type: false
// CS Name: Meta.WitAi.Requests.TextStreamHandler
class CORDL_TYPE TextStreamHandler : public ::UnityEngine::Networking::DownloadHandlerScript {
public:
// Declarations
using TextStreamResponseDelegate = ::Meta::WitAi::Requests::TextStreamHandler_TextStreamResponseDelegate;

 __declspec(property(get=get_Completion)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  Completion;

 __declspec(property(get=get_IsComplete, put=set_IsComplete)) bool  IsComplete;

 __declspec(property(get=get_IsStarted, put=set_IsStarted)) bool  IsStarted;

/// @brief Field OnFirstResponse, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnFirstResponse, put=__cordl_internal_set_OnFirstResponse)) ::Meta::WitAi::Requests::VRequestResponseDelegate*  OnFirstResponse;

/// @brief Field OnProgress, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnProgress, put=__cordl_internal_set_OnProgress)) ::Meta::WitAi::Requests::VRequestProgressDelegate*  OnProgress;

/// @brief Field OnResponse, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnResponse, put=__cordl_internal_set_OnResponse)) ::Meta::WitAi::Requests::VRequestResponseDelegate*  OnResponse;

 __declspec(property(get=get_Progress, put=set_Progress)) float_t  Progress;

/// @brief Field <Completion>k__BackingField, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__Completion_k__BackingField, put=__cordl_internal_set__Completion_k__BackingField)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  _Completion_k__BackingField;

/// @brief Field <IsComplete>k__BackingField, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsComplete_k__BackingField, put=__cordl_internal_set__IsComplete_k__BackingField)) bool  _IsComplete_k__BackingField;

/// @brief Field <IsStarted>k__BackingField, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsStarted_k__BackingField, put=__cordl_internal_set__IsStarted_k__BackingField)) bool  _IsStarted_k__BackingField;

/// @brief Field <Progress>k__BackingField, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__Progress_k__BackingField, put=__cordl_internal_set__Progress_k__BackingField)) float_t  _Progress_k__BackingField;

/// @brief Field _finalBuilder, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__finalBuilder, put=__cordl_internal_set__finalBuilder)) ::System::Text::StringBuilder*  _finalBuilder;

/// @brief Field _finalDelimiter, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__finalDelimiter, put=__cordl_internal_set__finalDelimiter)) ::StringW  _finalDelimiter;

/// @brief Field _finalLength, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__finalLength, put=__cordl_internal_set__finalLength)) int32_t  _finalLength;

/// @brief Field _partialBuilder, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__partialBuilder, put=__cordl_internal_set__partialBuilder)) ::System::Text::StringBuilder*  _partialBuilder;

/// @brief Field _partialDelimiter, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__partialDelimiter, put=__cordl_internal_set__partialDelimiter)) ::StringW  _partialDelimiter;

/// @brief Field _partialResponseDelegate, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__partialResponseDelegate, put=__cordl_internal_set__partialResponseDelegate)) ::Meta::WitAi::Requests::TextStreamHandler_TextStreamResponseDelegate*  _partialResponseDelegate;

/// @brief Convert operator to "::Meta::WitAi::Requests::IVRequestDownloadDecoder"
constexpr operator  ::Meta::WitAi::Requests::IVRequestDownloadDecoder*() noexcept;

/// [Preserve]
/// @brief Method CompleteContent, addr 0x9e87500, size 0xb0, virtual true, abstract: false, final false
inline void CompleteContent() ;

/// @brief Method DecodeBytes, addr 0x9e871f8, size 0x48, virtual false, abstract: false, final false
static inline ::StringW DecodeBytes(::ArrayW<uint8_t>  receiveData, int32_t  start, int32_t  length) ;

/// [Preserve]
/// @brief Method GetData, addr 0x9e874b0, size 0x50, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> GetData() ;

/// @brief Method GetDecodedLength, addr 0x9e87430, size 0x8, virtual false, abstract: false, final false
static inline int32_t GetDecodedLength(uint64_t  totalBits) ;

/// [Preserve]
/// @brief Method GetProgress, addr 0x9e87438, size 0x78, virtual true, abstract: false, final false
inline float_t GetProgress() ;

/// [Preserve]
/// @brief Method GetText, addr 0x9e87348, size 0xbc, virtual true, abstract: false, final false
inline ::StringW GetText() ;

/// @brief Method HandlePartial, addr 0x9e872d0, size 0x78, virtual true, abstract: false, final false
inline void HandlePartial(::StringW  newPartial) ;

/// @brief [Preserve]
static inline ::Meta::WitAi::Requests::TextStreamHandler* New_ctor(::Meta::WitAi::Requests::TextStreamHandler_TextStreamResponseDelegate*  partialResponseDelegate, ::StringW  partialDelimiter, ::StringW  finalDelimiter) ;

/// [Preserve]
/// @brief Method ReceiveContentLengthHeader, addr 0x9e87404, size 0x2c, virtual true, abstract: false, final false
inline void ReceiveContentLengthHeader(uint64_t  contentLength) ;

/// [Preserve]
/// @brief Method ReceiveData, addr 0x9e870ac, size 0x14c, virtual true, abstract: false, final false
inline bool ReceiveData(::ArrayW<uint8_t>  receiveData, int32_t  dataLength) ;

/// @brief Method RefreshProgress, addr 0x9e87258, size 0x78, virtual false, abstract: false, final false
inline void RefreshProgress() ;

/// @brief Method SplitText, addr 0x9e87240, size 0x18, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> SplitText(::StringW  source, ::StringW  delimiter) ;

constexpr ::Meta::WitAi::Requests::VRequestResponseDelegate* const& __cordl_internal_get_OnFirstResponse() const;

constexpr ::Meta::WitAi::Requests::VRequestResponseDelegate*& __cordl_internal_get_OnFirstResponse() ;

constexpr ::Meta::WitAi::Requests::VRequestProgressDelegate* const& __cordl_internal_get_OnProgress() const;

constexpr ::Meta::WitAi::Requests::VRequestProgressDelegate*& __cordl_internal_get_OnProgress() ;

constexpr ::Meta::WitAi::Requests::VRequestResponseDelegate* const& __cordl_internal_get_OnResponse() const;

constexpr ::Meta::WitAi::Requests::VRequestResponseDelegate*& __cordl_internal_get_OnResponse() ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& __cordl_internal_get__Completion_k__BackingField() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __cordl_internal_get__Completion_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsComplete_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsComplete_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsStarted_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsStarted_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__Progress_k__BackingField() const;

constexpr float_t& __cordl_internal_get__Progress_k__BackingField() ;

constexpr ::System::Text::StringBuilder* const& __cordl_internal_get__finalBuilder() const;

constexpr ::System::Text::StringBuilder*& __cordl_internal_get__finalBuilder() ;

constexpr ::StringW const& __cordl_internal_get__finalDelimiter() const;

constexpr ::StringW& __cordl_internal_get__finalDelimiter() ;

constexpr int32_t const& __cordl_internal_get__finalLength() const;

constexpr int32_t& __cordl_internal_get__finalLength() ;

constexpr ::System::Text::StringBuilder* const& __cordl_internal_get__partialBuilder() const;

constexpr ::System::Text::StringBuilder*& __cordl_internal_get__partialBuilder() ;

constexpr ::StringW const& __cordl_internal_get__partialDelimiter() const;

constexpr ::StringW& __cordl_internal_get__partialDelimiter() ;

constexpr ::Meta::WitAi::Requests::TextStreamHandler_TextStreamResponseDelegate* const& __cordl_internal_get__partialResponseDelegate() const;

constexpr ::Meta::WitAi::Requests::TextStreamHandler_TextStreamResponseDelegate*& __cordl_internal_get__partialResponseDelegate() ;

constexpr void __cordl_internal_set_OnFirstResponse(::Meta::WitAi::Requests::VRequestResponseDelegate*  value) ;

constexpr void __cordl_internal_set_OnProgress(::Meta::WitAi::Requests::VRequestProgressDelegate*  value) ;

constexpr void __cordl_internal_set_OnResponse(::Meta::WitAi::Requests::VRequestResponseDelegate*  value) ;

constexpr void __cordl_internal_set__Completion_k__BackingField(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value) ;

constexpr void __cordl_internal_set__IsComplete_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__IsStarted_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__Progress_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__finalBuilder(::System::Text::StringBuilder*  value) ;

constexpr void __cordl_internal_set__finalDelimiter(::StringW  value) ;

constexpr void __cordl_internal_set__finalLength(int32_t  value) ;

constexpr void __cordl_internal_set__partialBuilder(::System::Text::StringBuilder*  value) ;

constexpr void __cordl_internal_set__partialDelimiter(::StringW  value) ;

constexpr void __cordl_internal_set__partialResponseDelegate(::Meta::WitAi::Requests::TextStreamHandler_TextStreamResponseDelegate*  value) ;

/// [Preserve]
/// @brief Method .ctor, addr 0x9e86f24, size 0x188, virtual false, abstract: false, final false
inline void _ctor(::Meta::WitAi::Requests::TextStreamHandler_TextStreamResponseDelegate*  partialResponseDelegate, ::StringW  partialDelimiter, ::StringW  finalDelimiter) ;

/// [CompilerGenerated]
/// @brief Method add_OnFirstResponse, addr 0x9e86b54, size 0x9c, virtual true, abstract: false, final true
inline void add_OnFirstResponse(::Meta::WitAi::Requests::VRequestResponseDelegate*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnProgress, addr 0x9e86dd4, size 0x9c, virtual true, abstract: false, final true
inline void add_OnProgress(::Meta::WitAi::Requests::VRequestProgressDelegate*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnResponse, addr 0x9e86c8c, size 0x9c, virtual true, abstract: false, final true
inline void add_OnResponse(::Meta::WitAi::Requests::VRequestResponseDelegate*  value) ;

/// [CompilerGenerated]
/// @brief Method get_Completion, addr 0x9e86f1c, size 0x8, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::TaskCompletionSource_1<bool>* get_Completion() ;

/// [CompilerGenerated]
/// @brief Method get_IsComplete, addr 0x9e86f0c, size 0x8, virtual false, abstract: false, final false
inline bool get_IsComplete() ;

/// [CompilerGenerated]
/// @brief Method get_IsStarted, addr 0x9e86b44, size 0x8, virtual false, abstract: false, final false
inline bool get_IsStarted() ;

/// [CompilerGenerated]
/// @brief Method get_Progress, addr 0x9e86dc4, size 0x8, virtual false, abstract: false, final false
inline float_t get_Progress() ;

/// @brief Convert to "::Meta::WitAi::Requests::IVRequestDownloadDecoder"
constexpr ::Meta::WitAi::Requests::IVRequestDownloadDecoder* i___Meta__WitAi__Requests__IVRequestDownloadDecoder() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_OnFirstResponse, addr 0x9e86bf0, size 0x9c, virtual true, abstract: false, final true
inline void remove_OnFirstResponse(::Meta::WitAi::Requests::VRequestResponseDelegate*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnProgress, addr 0x9e86e70, size 0x9c, virtual true, abstract: false, final true
inline void remove_OnProgress(::Meta::WitAi::Requests::VRequestProgressDelegate*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnResponse, addr 0x9e86d28, size 0x9c, virtual true, abstract: false, final true
inline void remove_OnResponse(::Meta::WitAi::Requests::VRequestResponseDelegate*  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsComplete, addr 0x9e86f14, size 0x8, virtual false, abstract: false, final false
inline void set_IsComplete(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsStarted, addr 0x9e86b4c, size 0x8, virtual false, abstract: false, final false
inline void set_IsStarted(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_Progress, addr 0x9e86dcc, size 0x8, virtual false, abstract: false, final false
inline void set_Progress(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextStreamHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextStreamHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TextStreamHandler(TextStreamHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextStreamHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextStreamHandler(TextStreamHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25590};

/// @brief Field _partialResponseDelegate, offset: 0x18, size: 0x8, def value: None
 ::Meta::WitAi::Requests::TextStreamHandler_TextStreamResponseDelegate*  ____partialResponseDelegate;

/// @brief Field _partialDelimiter, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____partialDelimiter;

/// @brief Field _finalDelimiter, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____finalDelimiter;

/// @brief Field _partialBuilder, offset: 0x30, size: 0x8, def value: None
 ::System::Text::StringBuilder*  ____partialBuilder;

/// @brief Field _finalBuilder, offset: 0x38, size: 0x8, def value: None
 ::System::Text::StringBuilder*  ____finalBuilder;

/// @brief Field _finalLength, offset: 0x40, size: 0x4, def value: None
 int32_t  ____finalLength;

/// [CompilerGenerated]
/// @brief Field <IsStarted>k__BackingField, offset: 0x44, size: 0x1, def value: None
 bool  ____IsStarted_k__BackingField;

/// [CompilerGenerated]
/// @brief Field OnFirstResponse, offset: 0x48, size: 0x8, def value: None
 ::Meta::WitAi::Requests::VRequestResponseDelegate*  ___OnFirstResponse;

/// [CompilerGenerated]
/// @brief Field OnResponse, offset: 0x50, size: 0x8, def value: None
 ::Meta::WitAi::Requests::VRequestResponseDelegate*  ___OnResponse;

/// [CompilerGenerated]
/// @brief Field <Progress>k__BackingField, offset: 0x58, size: 0x4, def value: None
 float_t  ____Progress_k__BackingField;

/// [CompilerGenerated]
/// @brief Field OnProgress, offset: 0x60, size: 0x8, def value: None
 ::Meta::WitAi::Requests::VRequestProgressDelegate*  ___OnProgress;

/// [CompilerGenerated]
/// @brief Field <IsComplete>k__BackingField, offset: 0x68, size: 0x1, def value: None
 bool  ____IsComplete_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Completion>k__BackingField, offset: 0x70, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  ____Completion_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Requests::TextStreamHandler, ____partialResponseDelegate) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::TextStreamHandler, ____partialDelimiter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::TextStreamHandler, ____finalDelimiter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::TextStreamHandler, ____partialBuilder) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::TextStreamHandler, ____finalBuilder) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::TextStreamHandler, ____finalLength) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::TextStreamHandler, ____IsStarted_k__BackingField) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::TextStreamHandler, ___OnFirstResponse) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::TextStreamHandler, ___OnResponse) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::TextStreamHandler, ____Progress_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::TextStreamHandler, ___OnProgress) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::TextStreamHandler, ____IsComplete_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Requests::TextStreamHandler, ____Completion_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Requests::TextStreamHandler) == 0x78, "Size mismatch!");

} // namespace end def Meta::WitAi::Requests
// Dependencies System.MulticastDelegate
namespace Meta::WitAi::Requests {
// Is value type: false
// CS Name: Meta.WitAi.Requests.TextStreamHandler/TextStreamResponseDelegate
class CORDL_TYPE TextStreamHandler_TextStreamResponseDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x9e87660, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::StringW  rawText) ;

static inline ::Meta::WitAi::Requests::TextStreamHandler_TextStreamResponseDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9e875b0, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextStreamHandler_TextStreamResponseDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextStreamHandler_TextStreamResponseDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TextStreamHandler_TextStreamResponseDelegate(TextStreamHandler_TextStreamResponseDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextStreamHandler_TextStreamResponseDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextStreamHandler_TextStreamResponseDelegate(TextStreamHandler_TextStreamResponseDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25589};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::Requests::TextStreamHandler_TextStreamResponseDelegate) == 0x80, "Size mismatch!");

} // namespace end def Meta::WitAi::Requests
