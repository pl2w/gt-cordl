#pragma once
// IWYU pragma private; include "Modio/API/ModioAPIFileParameter.hpp"
#include "Modio/API/zzzz__ModioAPIFileParameter_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Modio::API::ModioAPIFileParameter.get_None
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::API::ModioAPIFileParameter (*)()>(&::Modio::API::ModioAPIFileParameter::get_None)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9fdd11c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIFileParameter>(),
                        {"get_None", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::ModioAPIFileParameter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::ModioAPIFileParameter::*)(::StringW, ::StringW, ::StringW)>(&::Modio::API::ModioAPIFileParameter::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9fdd138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIFileParameter>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::ModioAPIFileParameter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::ModioAPIFileParameter::*)(::System::IO::Stream*)>(&::Modio::API::ModioAPIFileParameter::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9fdd1e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIFileParameter>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::ModioAPIFileParameter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::ModioAPIFileParameter::*)(::System::IO::Stream*, ::StringW, ::StringW)>(&::Modio::API::ModioAPIFileParameter::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9fdd1f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIFileParameter>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::ModioAPIFileParameter.GetContent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::Modio::API::ModioAPIFileParameter::*)()>(&::Modio::API::ModioAPIFileParameter::GetContent)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9fdd258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIFileParameter>(),
                        {"GetContent", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::Modio::API::ModioAPIFileParameter Modio::API::ModioAPIFileParameter::get_None()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIFileParameter>(),
                        {"get_None", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::API::ModioAPIFileParameter>(nullptr, ___internal_method);
}
inline void Modio::API::ModioAPIFileParameter::_ctor(::StringW  name, ::StringW  contentType, ::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIFileParameter>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, name, contentType, path);
}
inline void Modio::API::ModioAPIFileParameter::_ctor(::System::IO::Stream*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIFileParameter>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stream);
}
inline void Modio::API::ModioAPIFileParameter::_ctor(::System::IO::Stream*  stream, ::StringW  name, ::StringW  contentType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIFileParameter>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stream, name, contentType);
}
inline ::System::IO::Stream* Modio::API::ModioAPIFileParameter::GetContent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIFileParameter>(),
                        {"GetContent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Unused", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Name", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ContentType", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MediaType", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Path", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_stream", ty: "::System::IO::Stream*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::ModioAPIFileParameter::ModioAPIFileParameter(bool  Unused, ::StringW  Name, ::StringW  ContentType, ::StringW  MediaType, ::StringW  Path, ::System::IO::Stream*  _stream) noexcept  {
this->Unused = Unused;
this->Name = Name;
this->ContentType = ContentType;
this->MediaType = MediaType;
this->Path = Path;
this->_stream = _stream;
}
// Ctor Parameters []
constexpr ::Modio::API::ModioAPIFileParameter::ModioAPIFileParameter()   {
}
