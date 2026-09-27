#pragma once
// IWYU pragma private; include "Liv/Lck/Core/LckCoreHandler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/Core/zzzz__LckCoreHandler_def.hpp"
#include "Liv/Lck/Core/zzzz__Result_1_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Core::LckCoreHandler.get_LckCoreInitializationResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::Core::Result_1<bool>* (*)()>(&::Liv::Lck::Core::LckCoreHandler::get_LckCoreInitializationResult)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9d415fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCoreHandler*>(),
                        {"get_LckCoreInitializationResult", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::LckCoreHandler.set_LckCoreInitializationResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Liv::Lck::Core::Result_1<bool>*)>(&::Liv::Lck::Core::LckCoreHandler::set_LckCoreInitializationResult)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9d41644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCoreHandler*>(),
                        {"set_LckCoreInitializationResult", {}, {::i2c::type_of<::Liv::Lck::Core::Result_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::LckCoreHandler.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Liv::Lck::Core::LckCoreHandler::Initialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9d4169c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCoreHandler*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::LckCoreHandler.InitializeInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Liv::Lck::Core::LckCoreHandler::InitializeInternal)> {
  constexpr static std::size_t size = 0x5dc;
  constexpr static std::size_t addrs = 0x9d416a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCoreHandler*>(),
                        {"InitializeInternal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Core::LckCoreHandler.GetRenderPipelineType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::Liv::Lck::Core::LckCoreHandler::GetRenderPipelineType)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x9d41c7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCoreHandler*>(),
                        {"GetRenderPipelineType", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Liv::Lck::Core::LckCoreHandler::setStaticF__LckCoreInitializationResult_k__BackingField(::Liv::Lck::Core::Result_1<bool>*  value)  {
::cordl_internals::setStaticField<::Liv::Lck::Core::Result_1<bool>*, "<LckCoreInitializationResult>k__BackingField", ::Liv::Lck::Core::LckCoreHandler*>(std::forward<::Liv::Lck::Core::Result_1<bool>*>(value));
}
inline ::Liv::Lck::Core::Result_1<bool>* Liv::Lck::Core::LckCoreHandler::getStaticF__LckCoreInitializationResult_k__BackingField()  {
return ::cordl_internals::getStaticField<::Liv::Lck::Core::Result_1<bool>*, "<LckCoreInitializationResult>k__BackingField", ::Liv::Lck::Core::LckCoreHandler*>();
}
inline ::Liv::Lck::Core::Result_1<bool>* Liv::Lck::Core::LckCoreHandler::get_LckCoreInitializationResult()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCoreHandler*>(),
                        {"get_LckCoreInitializationResult", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::Core::Result_1<bool>*>(nullptr, ___internal_method);
}
inline void Liv::Lck::Core::LckCoreHandler::set_LckCoreInitializationResult(::Liv::Lck::Core::Result_1<bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCoreHandler*>(),
                        {"set_LckCoreInitializationResult", {}, {::i2c::type_of<::Liv::Lck::Core::Result_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Liv::Lck::Core::LckCoreHandler::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCoreHandler*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Liv::Lck::Core::LckCoreHandler::InitializeInternal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCoreHandler*>(),
                        {"InitializeInternal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::StringW Liv::Lck::Core::LckCoreHandler::GetRenderPipelineType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Core::LckCoreHandler*>(),
                        {"GetRenderPipelineType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Liv::Lck::Core::LckCoreHandler::LckCoreHandler()   {
}
