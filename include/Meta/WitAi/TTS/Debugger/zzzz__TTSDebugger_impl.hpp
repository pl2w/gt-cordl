#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Debugger/TTSDebugger.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/WitAi/TTS/Debugger/zzzz__TTSDebugger_def.hpp"
#include "Meta/Voice/Logging/zzzz__IVLogger_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseNode_def.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__TTSClipData_def.hpp"
#include "Meta/WitAi/TTS/Debugger/zzzz__TTSDebugger_def.hpp"
#include "Meta/WitAi/TTS/zzzz__TTSService_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/IO/zzzz__FileStream_def.hpp"
#include "System/Text/RegularExpressions/zzzz__Regex_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::TTS::Debugger::TTSDebugger.get_Logger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Logging::IVLogger* (::Meta::WitAi::TTS::Debugger::TTSDebugger::*)()>(&::Meta::WitAi::TTS::Debugger::TTSDebugger::get_Logger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e66868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Debugger::TTSDebugger*>(),
                        {"get_Logger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Debugger::TTSDebugger.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Debugger::TTSDebugger::*)()>(&::Meta::WitAi::TTS::Debugger::TTSDebugger::Reset)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9e66870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Debugger::TTSDebugger*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Debugger::TTSDebugger.SetupRegex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Meta::WitAi::TTS::Debugger::TTSDebugger::SetupRegex)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x9e66920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Debugger::TTSDebugger*>(),
                        {"SetupRegex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Debugger::TTSDebugger.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Debugger::TTSDebugger::*)()>(&::Meta::WitAi::TTS::Debugger::TTSDebugger::OnEnable)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9e66a64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Debugger::TTSDebugger*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Debugger::TTSDebugger.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Debugger::TTSDebugger::*)()>(&::Meta::WitAi::TTS::Debugger::TTSDebugger::OnDisable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e66c88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Debugger::TTSDebugger*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Debugger::TTSDebugger.SetListeners
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Debugger::TTSDebugger::*)(bool)>(&::Meta::WitAi::TTS::Debugger::TTSDebugger::SetListeners)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x9e66b14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Debugger::TTSDebugger*>(),
                        {"SetListeners", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Debugger::TTSDebugger.GetClipName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::TTS::Debugger::TTSDebugger::*)(::Meta::WitAi::TTS::Data::TTSClipData*)>(&::Meta::WitAi::TTS::Debugger::TTSDebugger::GetClipName)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9e66c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Debugger::TTSDebugger*>(),
                        {"GetClipName", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Debugger::TTSDebugger.OnStreamBegin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Debugger::TTSDebugger::*)(::Meta::WitAi::TTS::Data::TTSClipData*)>(&::Meta::WitAi::TTS::Debugger::TTSDebugger::OnStreamBegin)> {
  constexpr static std::size_t size = 0x780;
  constexpr static std::size_t addrs = 0x9e66cac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Debugger::TTSDebugger*>(),
                        {"OnStreamBegin", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Debugger::TTSDebugger.OnStreamComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Debugger::TTSDebugger::*)(::Meta::WitAi::TTS::Data::TTSClipData*)>(&::Meta::WitAi::TTS::Debugger::TTSDebugger::OnStreamComplete)> {
  constexpr static std::size_t size = 0x994;
  constexpr static std::size_t addrs = 0x9e67604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Debugger::TTSDebugger*>(),
                        {"OnStreamComplete", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Debugger::TTSDebugger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Debugger::TTSDebugger::*)()>(&::Meta::WitAi::TTS::Debugger::TTSDebugger::_ctor)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x9e680c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Debugger::TTSDebugger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Meta::WitAi::TTS::TTSService>& Meta::WitAi::TTS::Debugger::TTSDebugger::__cordl_internal_get__service()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____service;
}
constexpr ::UnityW<::Meta::WitAi::TTS::TTSService> const& Meta::WitAi::TTS::Debugger::TTSDebugger::__cordl_internal_get__service() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____service;
}
constexpr void Meta::WitAi::TTS::Debugger::TTSDebugger::__cordl_internal_set__service(::UnityW<::Meta::WitAi::TTS::TTSService>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____service = value;
}
constexpr ::StringW& Meta::WitAi::TTS::Debugger::TTSDebugger::__cordl_internal_get__outputDirectory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outputDirectory;
}
constexpr ::StringW const& Meta::WitAi::TTS::Debugger::TTSDebugger::__cordl_internal_get__outputDirectory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outputDirectory;
}
constexpr void Meta::WitAi::TTS::Debugger::TTSDebugger::__cordl_internal_set__outputDirectory(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____outputDirectory = value;
}
constexpr ::Meta::Voice::Logging::IVLogger*& Meta::WitAi::TTS::Debugger::TTSDebugger::__cordl_internal_get__Logger_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Logger_k__BackingField;
}
constexpr ::Meta::Voice::Logging::IVLogger* const& Meta::WitAi::TTS::Debugger::TTSDebugger::__cordl_internal_get__Logger_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Logger_k__BackingField;
}
constexpr void Meta::WitAi::TTS::Debugger::TTSDebugger::__cordl_internal_set__Logger_k__BackingField(::Meta::Voice::Logging::IVLogger*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Logger_k__BackingField = value;
}
constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::Meta::WitAi::TTS::Debugger::TTSDebugger_TTSDebuggerFileStream*>*& Meta::WitAi::TTS::Debugger::TTSDebugger::__cordl_internal_get__streams()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____streams;
}
constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::Meta::WitAi::TTS::Debugger::TTSDebugger_TTSDebuggerFileStream*>* const& Meta::WitAi::TTS::Debugger::TTSDebugger::__cordl_internal_get__streams() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____streams;
}
constexpr void Meta::WitAi::TTS::Debugger::TTSDebugger::__cordl_internal_set__streams(::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::Meta::WitAi::TTS::Debugger::TTSDebugger_TTSDebuggerFileStream*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____streams = value;
}
inline void Meta::WitAi::TTS::Debugger::TTSDebugger::setStaticF__fileCleanupRegex(::System::Text::RegularExpressions::Regex*  value)  {
::cordl_internals::setStaticField<::System::Text::RegularExpressions::Regex*, "_fileCleanupRegex", ::Meta::WitAi::TTS::Debugger::TTSDebugger*>(std::forward<::System::Text::RegularExpressions::Regex*>(value));
}
inline ::System::Text::RegularExpressions::Regex* Meta::WitAi::TTS::Debugger::TTSDebugger::getStaticF__fileCleanupRegex()  {
return ::cordl_internals::getStaticField<::System::Text::RegularExpressions::Regex*, "_fileCleanupRegex", ::Meta::WitAi::TTS::Debugger::TTSDebugger*>();
}
inline ::Meta::Voice::Logging::IVLogger* Meta::WitAi::TTS::Debugger::TTSDebugger::get_Logger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Debugger::TTSDebugger*>(),
                        {"get_Logger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Logging::IVLogger*>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Debugger::TTSDebugger::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Debugger::TTSDebugger*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Debugger::TTSDebugger::SetupRegex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Debugger::TTSDebugger*>(),
                        {"SetupRegex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Meta::WitAi::TTS::Debugger::TTSDebugger::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Debugger::TTSDebugger*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Debugger::TTSDebugger::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Debugger::TTSDebugger*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TTS::Debugger::TTSDebugger::SetListeners(bool  add)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Debugger::TTSDebugger*>(),
                        {"SetListeners", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, add);
}
inline ::StringW Meta::WitAi::TTS::Debugger::TTSDebugger::GetClipName(::Meta::WitAi::TTS::Data::TTSClipData*  clipData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Debugger::TTSDebugger*>(),
                        {"GetClipName", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, clipData);
}
inline void Meta::WitAi::TTS::Debugger::TTSDebugger::OnStreamBegin(::Meta::WitAi::TTS::Data::TTSClipData*  clipData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Debugger::TTSDebugger*>(),
                        {"OnStreamBegin", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clipData);
}
inline void Meta::WitAi::TTS::Debugger::TTSDebugger::OnStreamComplete(::Meta::WitAi::TTS::Data::TTSClipData*  clipData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Debugger::TTSDebugger*>(),
                        {"OnStreamComplete", {}, {::i2c::type_of<::Meta::WitAi::TTS::Data::TTSClipData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clipData);
}
inline void Meta::WitAi::TTS::Debugger::TTSDebugger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Debugger::TTSDebugger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::Debugger::TTSDebugger* Meta::WitAi::TTS::Debugger::TTSDebugger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Debugger::TTSDebugger*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::Debugger::TTSDebugger::TTSDebugger()   {
}
//  Writing Method size for method: ::Meta::WitAi::TTS::Debugger::TTSDebugger_TTSDebuggerFileStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Debugger::TTSDebugger_TTSDebuggerFileStream::*)(::StringW)>(&::Meta::WitAi::TTS::Debugger::TTSDebugger_TTSDebuggerFileStream::_ctor)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x9e6742c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Debugger::TTSDebugger_TTSDebuggerFileStream*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Debugger::TTSDebugger_TTSDebuggerFileStream.AddSamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Debugger::TTSDebugger_TTSDebuggerFileStream::*)(::ArrayW<float_t>, int32_t, int32_t)>(&::Meta::WitAi::TTS::Debugger::TTSDebugger_TTSDebuggerFileStream::AddSamples)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x9e6825c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Debugger::TTSDebugger_TTSDebuggerFileStream*>(),
                        {"AddSamples", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Debugger::TTSDebugger_TTSDebuggerFileStream.AddEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Debugger::TTSDebugger_TTSDebuggerFileStream::*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::TTS::Debugger::TTSDebugger_TTSDebuggerFileStream::AddEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9e68380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Debugger::TTSDebugger_TTSDebuggerFileStream*>(),
                        {"AddEvent", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Debugger::TTSDebugger_TTSDebuggerFileStream.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Debugger::TTSDebugger_TTSDebuggerFileStream::*)()>(&::Meta::WitAi::TTS::Debugger::TTSDebugger_TTSDebuggerFileStream::Dispose)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9e68048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Debugger::TTSDebugger_TTSDebuggerFileStream*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Meta::WitAi::TTS::Debugger::TTSDebugger_TTSDebuggerFileStream::__cordl_internal_get_FilePath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FilePath;
}
constexpr ::StringW const& Meta::WitAi::TTS::Debugger::TTSDebugger_TTSDebuggerFileStream::__cordl_internal_get_FilePath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FilePath;
}
constexpr void Meta::WitAi::TTS::Debugger::TTSDebugger_TTSDebuggerFileStream::__cordl_internal_set_FilePath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FilePath = value;
}
constexpr ::System::Collections::Generic::List_1<::Meta::WitAi::Json::WitResponseNode*>*& Meta::WitAi::TTS::Debugger::TTSDebugger_TTSDebuggerFileStream::__cordl_internal_get_EventNodes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EventNodes;
}
constexpr ::System::Collections::Generic::List_1<::Meta::WitAi::Json::WitResponseNode*>* const& Meta::WitAi::TTS::Debugger::TTSDebugger_TTSDebuggerFileStream::__cordl_internal_get_EventNodes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EventNodes;
}
constexpr void Meta::WitAi::TTS::Debugger::TTSDebugger_TTSDebuggerFileStream::__cordl_internal_set_EventNodes(::System::Collections::Generic::List_1<::Meta::WitAi::Json::WitResponseNode*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EventNodes = value;
}
constexpr ::System::IO::FileStream*& Meta::WitAi::TTS::Debugger::TTSDebugger_TTSDebuggerFileStream::__cordl_internal_get__audioStream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioStream;
}
constexpr ::System::IO::FileStream* const& Meta::WitAi::TTS::Debugger::TTSDebugger_TTSDebuggerFileStream::__cordl_internal_get__audioStream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioStream;
}
constexpr void Meta::WitAi::TTS::Debugger::TTSDebugger_TTSDebuggerFileStream::__cordl_internal_set__audioStream(::System::IO::FileStream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audioStream = value;
}
inline void Meta::WitAi::TTS::Debugger::TTSDebugger_TTSDebuggerFileStream::_ctor(::StringW  filePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Debugger::TTSDebugger_TTSDebuggerFileStream*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, filePath);
}
inline void Meta::WitAi::TTS::Debugger::TTSDebugger_TTSDebuggerFileStream::AddSamples(::ArrayW<float_t>  samples, int32_t  offset, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Debugger::TTSDebugger_TTSDebuggerFileStream*>(),
                        {"AddSamples", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, samples, offset, length);
}
inline void Meta::WitAi::TTS::Debugger::TTSDebugger_TTSDebuggerFileStream::AddEvent(::Meta::WitAi::Json::WitResponseNode*  ttsEvent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Debugger::TTSDebugger_TTSDebuggerFileStream*>(),
                        {"AddEvent", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ttsEvent);
}
inline void Meta::WitAi::TTS::Debugger::TTSDebugger_TTSDebuggerFileStream::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Debugger::TTSDebugger_TTSDebuggerFileStream*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::Debugger::TTSDebugger_TTSDebuggerFileStream* Meta::WitAi::TTS::Debugger::TTSDebugger_TTSDebuggerFileStream::New_ctor(::StringW  filePath)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Debugger::TTSDebugger_TTSDebuggerFileStream*>(filePath));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::Debugger::TTSDebugger_TTSDebuggerFileStream::TTSDebugger_TTSDebuggerFileStream()   {
}
