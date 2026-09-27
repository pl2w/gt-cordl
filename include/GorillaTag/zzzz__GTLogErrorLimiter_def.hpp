#pragma once
// IWYU pragma private; include "GorillaTag/GTLogErrorLimiter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Text/zzzz__Utf16ValueStringBuilder_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GTLogErrorLimiter)
namespace Cysharp::Text {
struct Utf16ValueStringBuilder;
}
namespace System::Text {
class StringBuilder;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace GorillaTag {
class GTLogErrorLimiter;
}
// Write type traits
MARK_REF_T(::GorillaTag::GTLogErrorLimiter*);
DEFINE_IL2CPP_CLASS(::GorillaTag::GTLogErrorLimiter*, "GorillaTag", "GTLogErrorLimiter");
// Dependencies Cysharp.Text.Utf16ValueStringBuilder, System.Object
namespace GorillaTag {
// Is value type: false
// CS Name: GorillaTag.GTLogErrorLimiter
class CORDL_TYPE GTLogErrorLimiter : public ::System::Object {
public:
// Declarations
/// @brief Field _baseMessage, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__baseMessage, put=__cordl_internal_set__baseMessage)) ::StringW  _baseMessage;

 __declspec(property(get=get_baseMessage, put=set_baseMessage)) ::StringW  baseMessage;

/// @brief Field countdown, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_countdown, put=__cordl_internal_set_countdown)) int32_t  countdown;

/// @brief Field occurrenceCount, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_occurrenceCount, put=__cordl_internal_set_occurrenceCount)) int32_t  occurrenceCount;

/// @brief Field occurrencesJoinString, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_occurrencesJoinString, put=__cordl_internal_set_occurrencesJoinString)) ::StringW  occurrencesJoinString;

/// @brief Field sb, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_sb, put=__cordl_internal_set_sb)) ::Cysharp::Text::Utf16ValueStringBuilder  sb;

/// @brief Method AddOccurence, addr 0x5d23b5c, size 0x1bc, virtual false, abstract: false, final false
inline void AddOccurence(::UnityEngine::GameObject*  gObj) ;

/// @brief Method AddOccurrence, addr 0x5d23890, size 0x198, virtual false, abstract: false, final false
inline void AddOccurrence(::StringW  s) ;

/// @brief Method AddOccurrence, addr 0x5d23a28, size 0x134, virtual false, abstract: false, final false
inline void AddOccurrence(::System::Text::StringBuilder*  stringBuilder) ;

/// @brief Method Log, addr 0x5d2377c, size 0x114, virtual false, abstract: false, final false
inline void Log(::UnityEngine::Object*  obj, ::UnityEngine::Object*  context, /* [CallerMemberName] */ ::StringW  caller, /* [CallerFilePath] */ ::StringW  sourceFilePath, /* [CallerLineNumber] */ int32_t  line) ;

/// @brief Method Log, addr 0x5d23208, size 0x574, virtual false, abstract: false, final false
inline void Log(::StringW  subMessage, ::UnityEngine::Object*  context, /* [CallerMemberName] */ ::StringW  caller, /* [CallerFilePath] */ ::StringW  sourceFilePath, /* [CallerLineNumber] */ int32_t  line) ;

/// @brief Method LogOccurrences, addr 0x5d23d18, size 0x164, virtual false, abstract: false, final false
inline void LogOccurrences(::UnityEngine::Component*  component, ::UnityEngine::Object*  obj, /* [CallerMemberName] */ ::StringW  caller, /* [CallerFilePath] */ ::StringW  sourceFilePath, /* [CallerLineNumber] */ int32_t  line) ;

/// @brief Method LogOccurrences, addr 0x5d23e7c, size 0x150, virtual false, abstract: false, final false
inline void LogOccurrences(::Cysharp::Text::Utf16ValueStringBuilder  subMessage, ::UnityEngine::Object*  obj, /* [CallerMemberName] */ ::StringW  caller, /* [CallerFilePath] */ ::StringW  sourceFilePath, /* [CallerLineNumber] */ int32_t  line) ;

static inline ::GorillaTag::GTLogErrorLimiter* New_ctor(::StringW  baseMessage, int32_t  countdown, ::StringW  occurrencesJoinString) ;

constexpr ::StringW const& __cordl_internal_get__baseMessage() const;

constexpr ::StringW& __cordl_internal_get__baseMessage() ;

constexpr int32_t const& __cordl_internal_get_countdown() const;

constexpr int32_t& __cordl_internal_get_countdown() ;

constexpr int32_t const& __cordl_internal_get_occurrenceCount() const;

constexpr int32_t& __cordl_internal_get_occurrenceCount() ;

constexpr ::StringW const& __cordl_internal_get_occurrencesJoinString() const;

constexpr ::StringW& __cordl_internal_get_occurrencesJoinString() ;

constexpr ::Cysharp::Text::Utf16ValueStringBuilder const& __cordl_internal_get_sb() const;

constexpr ::Cysharp::Text::Utf16ValueStringBuilder& __cordl_internal_get_sb() ;

constexpr void __cordl_internal_set__baseMessage(::StringW  value) ;

constexpr void __cordl_internal_set_countdown(int32_t  value) ;

constexpr void __cordl_internal_set_occurrenceCount(int32_t  value) ;

constexpr void __cordl_internal_set_occurrencesJoinString(::StringW  value) ;

constexpr void __cordl_internal_set_sb(::Cysharp::Text::Utf16ValueStringBuilder  value) ;

/// @brief Method .ctor, addr 0x5d230a8, size 0x160, virtual false, abstract: false, final false
inline void _ctor(::StringW  baseMessage, int32_t  countdown, ::StringW  occurrencesJoinString) ;

/// @brief Method get_baseMessage, addr 0x5d23040, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_baseMessage() ;

/// @brief Method set_baseMessage, addr 0x5d23048, size 0x60, virtual false, abstract: false, final false
inline void set_baseMessage(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTLogErrorLimiter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTLogErrorLimiter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTLogErrorLimiter(GTLogErrorLimiter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTLogErrorLimiter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTLogErrorLimiter(GTLogErrorLimiter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4613};

/// @brief Field __NULL__ offset 0xffffffff size 0x8
static constexpr ::ConstString  __NULL__{u"__NULL__"};

/// @brief Field k_lastMsgHeader offset 0xffffffff size 0x8
static constexpr ::ConstString  k_lastMsgHeader{u"!!!! THIS MESSAGE HAS REACHED MAX SPAM COUNT AND WILL NO LONGER BE LOGGED !!!!\n"};

/// @brief Field countdown, offset: 0x10, size: 0x4, def value: None
 int32_t  ___countdown;

/// @brief Field occurrenceCount, offset: 0x14, size: 0x4, def value: None
 int32_t  ___occurrenceCount;

/// @brief Field occurrencesJoinString, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___occurrencesJoinString;

/// @brief Field _baseMessage, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____baseMessage;

/// @brief Field sb, offset: 0x28, size: 0x10, def value: None
 ::Cysharp::Text::Utf16ValueStringBuilder  ___sb;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::GTLogErrorLimiter, ___countdown) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::GTLogErrorLimiter, ___occurrenceCount) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::GTLogErrorLimiter, ___occurrencesJoinString) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::GTLogErrorLimiter, ____baseMessage) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::GTLogErrorLimiter, ___sb) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::GTLogErrorLimiter) == 0x38, "Size mismatch!");

} // namespace end def GorillaTag
