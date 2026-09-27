#pragma once
// IWYU pragma private; include "Meta/WitAi/Requests/TextStreamHandler.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/Networking/zzzz__DownloadHandlerScript_impl.hpp"
#include "Meta/WitAi/Requests/zzzz__TextStreamHandler_def.hpp"
#include "Meta/WitAi/Requests/zzzz__IVRequestDownloadDecoder_def.hpp"
#include "Meta/WitAi/Requests/zzzz__TextStreamHandler_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VRequestProgressDelegate_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VRequestResponseDelegate_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Requests::TextStreamHandler.get_IsStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Requests::TextStreamHandler::*)()>(&::Meta::WitAi::Requests::TextStreamHandler::get_IsStarted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e86b44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::TextStreamHandler*>(),
                        {"get_IsStarted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::TextStreamHandler.set_IsStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::TextStreamHandler::*)(bool)>(&::Meta::WitAi::Requests::TextStreamHandler::set_IsStarted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e86b4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::TextStreamHandler*>(),
                        {"set_IsStarted", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::TextStreamHandler.add_OnFirstResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::TextStreamHandler::*)(::Meta::WitAi::Requests::VRequestResponseDelegate*)>(&::Meta::WitAi::Requests::TextStreamHandler::add_OnFirstResponse)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e86b54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::TextStreamHandler*>(),
                        {"add_OnFirstResponse", {}, {::i2c::type_of<::Meta::WitAi::Requests::VRequestResponseDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::TextStreamHandler.remove_OnFirstResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::TextStreamHandler::*)(::Meta::WitAi::Requests::VRequestResponseDelegate*)>(&::Meta::WitAi::Requests::TextStreamHandler::remove_OnFirstResponse)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e86bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::TextStreamHandler*>(),
                        {"remove_OnFirstResponse", {}, {::i2c::type_of<::Meta::WitAi::Requests::VRequestResponseDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::TextStreamHandler.add_OnResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::TextStreamHandler::*)(::Meta::WitAi::Requests::VRequestResponseDelegate*)>(&::Meta::WitAi::Requests::TextStreamHandler::add_OnResponse)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e86c8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::TextStreamHandler*>(),
                        {"add_OnResponse", {}, {::i2c::type_of<::Meta::WitAi::Requests::VRequestResponseDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::TextStreamHandler.remove_OnResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::TextStreamHandler::*)(::Meta::WitAi::Requests::VRequestResponseDelegate*)>(&::Meta::WitAi::Requests::TextStreamHandler::remove_OnResponse)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e86d28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::TextStreamHandler*>(),
                        {"remove_OnResponse", {}, {::i2c::type_of<::Meta::WitAi::Requests::VRequestResponseDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::TextStreamHandler.get_Progress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Meta::WitAi::Requests::TextStreamHandler::*)()>(&::Meta::WitAi::Requests::TextStreamHandler::get_Progress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e86dc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::TextStreamHandler*>(),
                        {"get_Progress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::TextStreamHandler.set_Progress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::TextStreamHandler::*)(float_t)>(&::Meta::WitAi::Requests::TextStreamHandler::set_Progress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e86dcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::TextStreamHandler*>(),
                        {"set_Progress", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::TextStreamHandler.add_OnProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::TextStreamHandler::*)(::Meta::WitAi::Requests::VRequestProgressDelegate*)>(&::Meta::WitAi::Requests::TextStreamHandler::add_OnProgress)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e86dd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::TextStreamHandler*>(),
                        {"add_OnProgress", {}, {::i2c::type_of<::Meta::WitAi::Requests::VRequestProgressDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::TextStreamHandler.remove_OnProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::TextStreamHandler::*)(::Meta::WitAi::Requests::VRequestProgressDelegate*)>(&::Meta::WitAi::Requests::TextStreamHandler::remove_OnProgress)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e86e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::TextStreamHandler*>(),
                        {"remove_OnProgress", {}, {::i2c::type_of<::Meta::WitAi::Requests::VRequestProgressDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::TextStreamHandler.get_IsComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Requests::TextStreamHandler::*)()>(&::Meta::WitAi::Requests::TextStreamHandler::get_IsComplete)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e86f0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::TextStreamHandler*>(),
                        {"get_IsComplete", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::TextStreamHandler.set_IsComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::TextStreamHandler::*)(bool)>(&::Meta::WitAi::Requests::TextStreamHandler::set_IsComplete)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e86f14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::TextStreamHandler*>(),
                        {"set_IsComplete", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::TextStreamHandler.get_Completion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::TaskCompletionSource_1<bool>* (::Meta::WitAi::Requests::TextStreamHandler::*)()>(&::Meta::WitAi::Requests::TextStreamHandler::get_Completion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e86f1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::TextStreamHandler*>(),
                        {"get_Completion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::TextStreamHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::TextStreamHandler::*)(::Meta::WitAi::Requests::TextStreamHandler_TextStreamResponseDelegate*, ::StringW, ::StringW)>(&::Meta::WitAi::Requests::TextStreamHandler::_ctor)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x9e86f24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::TextStreamHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::WitAi::Requests::TextStreamHandler_TextStreamResponseDelegate*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::TextStreamHandler.ReceiveData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Requests::TextStreamHandler::*)(::ArrayW<uint8_t>, int32_t)>(&::Meta::WitAi::Requests::TextStreamHandler::ReceiveData)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x9e870ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Requests::TextStreamHandler*>(),
                    {::i2c::class_of<::Meta::WitAi::Requests::TextStreamHandler*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::TextStreamHandler.HandlePartial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::TextStreamHandler::*)(::StringW)>(&::Meta::WitAi::Requests::TextStreamHandler::HandlePartial)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9e872d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Requests::TextStreamHandler*>(),
                    {::i2c::class_of<::Meta::WitAi::Requests::TextStreamHandler*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::TextStreamHandler.GetText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::Requests::TextStreamHandler::*)()>(&::Meta::WitAi::Requests::TextStreamHandler::GetText)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x9e87348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Requests::TextStreamHandler*>(),
                    {::i2c::class_of<::Meta::WitAi::Requests::TextStreamHandler*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::TextStreamHandler.ReceiveContentLengthHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::TextStreamHandler::*)(uint64_t)>(&::Meta::WitAi::Requests::TextStreamHandler::ReceiveContentLengthHeader)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9e87404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Requests::TextStreamHandler*>(),
                    {::i2c::class_of<::Meta::WitAi::Requests::TextStreamHandler*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::TextStreamHandler.RefreshProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::TextStreamHandler::*)()>(&::Meta::WitAi::Requests::TextStreamHandler::RefreshProgress)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9e87258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::TextStreamHandler*>(),
                        {"RefreshProgress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::TextStreamHandler.GetProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Meta::WitAi::Requests::TextStreamHandler::*)()>(&::Meta::WitAi::Requests::TextStreamHandler::GetProgress)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9e87438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Requests::TextStreamHandler*>(),
                    {::i2c::class_of<::Meta::WitAi::Requests::TextStreamHandler*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::TextStreamHandler.GetData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Meta::WitAi::Requests::TextStreamHandler::*)()>(&::Meta::WitAi::Requests::TextStreamHandler::GetData)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x9e874b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Requests::TextStreamHandler*>(),
                    {::i2c::class_of<::Meta::WitAi::Requests::TextStreamHandler*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::TextStreamHandler.CompleteContent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::TextStreamHandler::*)()>(&::Meta::WitAi::Requests::TextStreamHandler::CompleteContent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9e87500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Requests::TextStreamHandler*>(),
                    {::i2c::class_of<::Meta::WitAi::Requests::TextStreamHandler*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::TextStreamHandler.DecodeBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Meta::WitAi::Requests::TextStreamHandler::DecodeBytes)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9e871f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::TextStreamHandler*>(),
                        {"DecodeBytes", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::TextStreamHandler.GetDecodedLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint64_t)>(&::Meta::WitAi::Requests::TextStreamHandler::GetDecodedLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e87430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::TextStreamHandler*>(),
                        {"GetDecodedLength", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::TextStreamHandler.SplitText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)(::StringW, ::StringW)>(&::Meta::WitAi::Requests::TextStreamHandler::SplitText)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9e87240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::TextStreamHandler*>(),
                        {"SplitText", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::WitAi::Requests::TextStreamHandler_TextStreamResponseDelegate*& Meta::WitAi::Requests::TextStreamHandler::__cordl_internal_get__partialResponseDelegate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____partialResponseDelegate;
}
constexpr ::Meta::WitAi::Requests::TextStreamHandler_TextStreamResponseDelegate* const& Meta::WitAi::Requests::TextStreamHandler::__cordl_internal_get__partialResponseDelegate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____partialResponseDelegate;
}
constexpr void Meta::WitAi::Requests::TextStreamHandler::__cordl_internal_set__partialResponseDelegate(::Meta::WitAi::Requests::TextStreamHandler_TextStreamResponseDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____partialResponseDelegate = value;
}
constexpr ::StringW& Meta::WitAi::Requests::TextStreamHandler::__cordl_internal_get__partialDelimiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____partialDelimiter;
}
constexpr ::StringW const& Meta::WitAi::Requests::TextStreamHandler::__cordl_internal_get__partialDelimiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____partialDelimiter;
}
constexpr void Meta::WitAi::Requests::TextStreamHandler::__cordl_internal_set__partialDelimiter(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____partialDelimiter = value;
}
constexpr ::StringW& Meta::WitAi::Requests::TextStreamHandler::__cordl_internal_get__finalDelimiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____finalDelimiter;
}
constexpr ::StringW const& Meta::WitAi::Requests::TextStreamHandler::__cordl_internal_get__finalDelimiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____finalDelimiter;
}
constexpr void Meta::WitAi::Requests::TextStreamHandler::__cordl_internal_set__finalDelimiter(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____finalDelimiter = value;
}
constexpr ::System::Text::StringBuilder*& Meta::WitAi::Requests::TextStreamHandler::__cordl_internal_get__partialBuilder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____partialBuilder;
}
constexpr ::System::Text::StringBuilder* const& Meta::WitAi::Requests::TextStreamHandler::__cordl_internal_get__partialBuilder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____partialBuilder;
}
constexpr void Meta::WitAi::Requests::TextStreamHandler::__cordl_internal_set__partialBuilder(::System::Text::StringBuilder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____partialBuilder = value;
}
constexpr ::System::Text::StringBuilder*& Meta::WitAi::Requests::TextStreamHandler::__cordl_internal_get__finalBuilder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____finalBuilder;
}
constexpr ::System::Text::StringBuilder* const& Meta::WitAi::Requests::TextStreamHandler::__cordl_internal_get__finalBuilder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____finalBuilder;
}
constexpr void Meta::WitAi::Requests::TextStreamHandler::__cordl_internal_set__finalBuilder(::System::Text::StringBuilder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____finalBuilder = value;
}
constexpr int32_t& Meta::WitAi::Requests::TextStreamHandler::__cordl_internal_get__finalLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____finalLength;
}
constexpr int32_t const& Meta::WitAi::Requests::TextStreamHandler::__cordl_internal_get__finalLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____finalLength;
}
constexpr void Meta::WitAi::Requests::TextStreamHandler::__cordl_internal_set__finalLength(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____finalLength = value;
}
constexpr bool& Meta::WitAi::Requests::TextStreamHandler::__cordl_internal_get__IsStarted_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsStarted_k__BackingField;
}
constexpr bool const& Meta::WitAi::Requests::TextStreamHandler::__cordl_internal_get__IsStarted_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsStarted_k__BackingField;
}
constexpr void Meta::WitAi::Requests::TextStreamHandler::__cordl_internal_set__IsStarted_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsStarted_k__BackingField = value;
}
constexpr ::Meta::WitAi::Requests::VRequestResponseDelegate*& Meta::WitAi::Requests::TextStreamHandler::__cordl_internal_get_OnFirstResponse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnFirstResponse;
}
constexpr ::Meta::WitAi::Requests::VRequestResponseDelegate* const& Meta::WitAi::Requests::TextStreamHandler::__cordl_internal_get_OnFirstResponse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnFirstResponse;
}
constexpr void Meta::WitAi::Requests::TextStreamHandler::__cordl_internal_set_OnFirstResponse(::Meta::WitAi::Requests::VRequestResponseDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnFirstResponse = value;
}
constexpr ::Meta::WitAi::Requests::VRequestResponseDelegate*& Meta::WitAi::Requests::TextStreamHandler::__cordl_internal_get_OnResponse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnResponse;
}
constexpr ::Meta::WitAi::Requests::VRequestResponseDelegate* const& Meta::WitAi::Requests::TextStreamHandler::__cordl_internal_get_OnResponse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnResponse;
}
constexpr void Meta::WitAi::Requests::TextStreamHandler::__cordl_internal_set_OnResponse(::Meta::WitAi::Requests::VRequestResponseDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnResponse = value;
}
constexpr float_t& Meta::WitAi::Requests::TextStreamHandler::__cordl_internal_get__Progress_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Progress_k__BackingField;
}
constexpr float_t const& Meta::WitAi::Requests::TextStreamHandler::__cordl_internal_get__Progress_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Progress_k__BackingField;
}
constexpr void Meta::WitAi::Requests::TextStreamHandler::__cordl_internal_set__Progress_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Progress_k__BackingField = value;
}
constexpr ::Meta::WitAi::Requests::VRequestProgressDelegate*& Meta::WitAi::Requests::TextStreamHandler::__cordl_internal_get_OnProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnProgress;
}
constexpr ::Meta::WitAi::Requests::VRequestProgressDelegate* const& Meta::WitAi::Requests::TextStreamHandler::__cordl_internal_get_OnProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnProgress;
}
constexpr void Meta::WitAi::Requests::TextStreamHandler::__cordl_internal_set_OnProgress(::Meta::WitAi::Requests::VRequestProgressDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnProgress = value;
}
constexpr bool& Meta::WitAi::Requests::TextStreamHandler::__cordl_internal_get__IsComplete_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsComplete_k__BackingField;
}
constexpr bool const& Meta::WitAi::Requests::TextStreamHandler::__cordl_internal_get__IsComplete_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsComplete_k__BackingField;
}
constexpr void Meta::WitAi::Requests::TextStreamHandler::__cordl_internal_set__IsComplete_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsComplete_k__BackingField = value;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& Meta::WitAi::Requests::TextStreamHandler::__cordl_internal_get__Completion_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Completion_k__BackingField;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& Meta::WitAi::Requests::TextStreamHandler::__cordl_internal_get__Completion_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Completion_k__BackingField;
}
constexpr void Meta::WitAi::Requests::TextStreamHandler::__cordl_internal_set__Completion_k__BackingField(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Completion_k__BackingField = value;
}
inline bool Meta::WitAi::Requests::TextStreamHandler::get_IsStarted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::TextStreamHandler*>(),
                        {"get_IsStarted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::TextStreamHandler::set_IsStarted(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::TextStreamHandler*>(),
                        {"set_IsStarted", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::Requests::TextStreamHandler::add_OnFirstResponse(::Meta::WitAi::Requests::VRequestResponseDelegate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::TextStreamHandler*>(),
                        {"add_OnFirstResponse", {}, {::i2c::type_of<::Meta::WitAi::Requests::VRequestResponseDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::Requests::TextStreamHandler::remove_OnFirstResponse(::Meta::WitAi::Requests::VRequestResponseDelegate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::TextStreamHandler*>(),
                        {"remove_OnFirstResponse", {}, {::i2c::type_of<::Meta::WitAi::Requests::VRequestResponseDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::Requests::TextStreamHandler::add_OnResponse(::Meta::WitAi::Requests::VRequestResponseDelegate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::TextStreamHandler*>(),
                        {"add_OnResponse", {}, {::i2c::type_of<::Meta::WitAi::Requests::VRequestResponseDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::Requests::TextStreamHandler::remove_OnResponse(::Meta::WitAi::Requests::VRequestResponseDelegate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::TextStreamHandler*>(),
                        {"remove_OnResponse", {}, {::i2c::type_of<::Meta::WitAi::Requests::VRequestResponseDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Meta::WitAi::Requests::TextStreamHandler::get_Progress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::TextStreamHandler*>(),
                        {"get_Progress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::TextStreamHandler::set_Progress(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::TextStreamHandler*>(),
                        {"set_Progress", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::Requests::TextStreamHandler::add_OnProgress(::Meta::WitAi::Requests::VRequestProgressDelegate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::TextStreamHandler*>(),
                        {"add_OnProgress", {}, {::i2c::type_of<::Meta::WitAi::Requests::VRequestProgressDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::Requests::TextStreamHandler::remove_OnProgress(::Meta::WitAi::Requests::VRequestProgressDelegate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::TextStreamHandler*>(),
                        {"remove_OnProgress", {}, {::i2c::type_of<::Meta::WitAi::Requests::VRequestProgressDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::WitAi::Requests::TextStreamHandler::get_IsComplete()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::TextStreamHandler*>(),
                        {"get_IsComplete", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::TextStreamHandler::set_IsComplete(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::TextStreamHandler*>(),
                        {"set_IsComplete", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Threading::Tasks::TaskCompletionSource_1<bool>* Meta::WitAi::Requests::TextStreamHandler::get_Completion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::TextStreamHandler*>(),
                        {"get_Completion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::TaskCompletionSource_1<bool>*>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::TextStreamHandler::_ctor(::Meta::WitAi::Requests::TextStreamHandler_TextStreamResponseDelegate*  partialResponseDelegate, ::StringW  partialDelimiter, ::StringW  finalDelimiter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::TextStreamHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::WitAi::Requests::TextStreamHandler_TextStreamResponseDelegate*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, partialResponseDelegate, partialDelimiter, finalDelimiter);
}
inline bool Meta::WitAi::Requests::TextStreamHandler::ReceiveData(::ArrayW<uint8_t>  receiveData, int32_t  dataLength)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Requests::TextStreamHandler*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, receiveData, dataLength);
}
inline void Meta::WitAi::Requests::TextStreamHandler::HandlePartial(::StringW  newPartial)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Requests::TextStreamHandler*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newPartial);
}
inline ::StringW Meta::WitAi::Requests::TextStreamHandler::GetText()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Requests::TextStreamHandler*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::TextStreamHandler::ReceiveContentLengthHeader(uint64_t  contentLength)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Requests::TextStreamHandler*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, contentLength);
}
inline void Meta::WitAi::Requests::TextStreamHandler::RefreshProgress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::TextStreamHandler*>(),
                        {"RefreshProgress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Meta::WitAi::Requests::TextStreamHandler::GetProgress()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Requests::TextStreamHandler*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Meta::WitAi::Requests::TextStreamHandler::GetData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Requests::TextStreamHandler*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::TextStreamHandler::CompleteContent()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Requests::TextStreamHandler*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Meta::WitAi::Requests::TextStreamHandler::DecodeBytes(::ArrayW<uint8_t>  receiveData, int32_t  start, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::TextStreamHandler*>(),
                        {"DecodeBytes", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, receiveData, start, length);
}
inline int32_t Meta::WitAi::Requests::TextStreamHandler::GetDecodedLength(uint64_t  totalBits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::TextStreamHandler*>(),
                        {"GetDecodedLength", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, totalBits);
}
inline ::ArrayW<::StringW> Meta::WitAi::Requests::TextStreamHandler::SplitText(::StringW  source, ::StringW  delimiter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::TextStreamHandler*>(),
                        {"SplitText", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method, source, delimiter);
}
/// @brief [Preserve]
inline ::Meta::WitAi::Requests::TextStreamHandler* Meta::WitAi::Requests::TextStreamHandler::New_ctor(::Meta::WitAi::Requests::TextStreamHandler_TextStreamResponseDelegate*  partialResponseDelegate, ::StringW  partialDelimiter, ::StringW  finalDelimiter)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Requests::TextStreamHandler*>(partialResponseDelegate, partialDelimiter, finalDelimiter));
}
/// @brief Convert operator to "::Meta::WitAi::Requests::IVRequestDownloadDecoder"
constexpr  Meta::WitAi::Requests::TextStreamHandler::operator ::Meta::WitAi::Requests::IVRequestDownloadDecoder*() noexcept {
return static_cast<::Meta::WitAi::Requests::IVRequestDownloadDecoder*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::WitAi::Requests::IVRequestDownloadDecoder"
constexpr ::Meta::WitAi::Requests::IVRequestDownloadDecoder* Meta::WitAi::Requests::TextStreamHandler::i___Meta__WitAi__Requests__IVRequestDownloadDecoder() noexcept {
return static_cast<::Meta::WitAi::Requests::IVRequestDownloadDecoder*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Requests::TextStreamHandler::TextStreamHandler()   {
}
//  Writing Method size for method: ::Meta::WitAi::Requests::TextStreamHandler_TextStreamResponseDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::TextStreamHandler_TextStreamResponseDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Meta::WitAi::Requests::TextStreamHandler_TextStreamResponseDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9e875b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::TextStreamHandler_TextStreamResponseDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::TextStreamHandler_TextStreamResponseDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::TextStreamHandler_TextStreamResponseDelegate::*)(::StringW)>(&::Meta::WitAi::Requests::TextStreamHandler_TextStreamResponseDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9e87660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Requests::TextStreamHandler_TextStreamResponseDelegate*>(),
                    {::i2c::class_of<::Meta::WitAi::Requests::TextStreamHandler_TextStreamResponseDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Meta::WitAi::Requests::TextStreamHandler_TextStreamResponseDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::TextStreamHandler_TextStreamResponseDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Meta::WitAi::Requests::TextStreamHandler_TextStreamResponseDelegate::Invoke(::StringW  rawText)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Requests::TextStreamHandler_TextStreamResponseDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rawText);
}
inline ::Meta::WitAi::Requests::TextStreamHandler_TextStreamResponseDelegate* Meta::WitAi::Requests::TextStreamHandler_TextStreamResponseDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Requests::TextStreamHandler_TextStreamResponseDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Requests::TextStreamHandler_TextStreamResponseDelegate::TextStreamHandler_TextStreamResponseDelegate()   {
}
