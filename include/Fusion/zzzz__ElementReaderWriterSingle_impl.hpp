#pragma once
// IWYU pragma private; include "Fusion/ElementReaderWriterSingle.hpp"
#include "Fusion/zzzz__ElementReaderWriterSingle_def.hpp"
#include "Fusion/zzzz__IElementReaderWriter_1_def.hpp"
//  Writing Method size for method: ::Fusion::ElementReaderWriterSingle.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Fusion::ElementReaderWriterSingle::*)(uint8_t*, int32_t)>(&::Fusion::ElementReaderWriterSingle::Read)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f9afe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterSingle>(),
                        {"Read", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ElementReaderWriterSingle.ReadRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<float_t> (::Fusion::ElementReaderWriterSingle::*)(uint8_t*, int32_t)>(&::Fusion::ElementReaderWriterSingle::ReadRef)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f9afec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterSingle>(),
                        {"ReadRef", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ElementReaderWriterSingle.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ElementReaderWriterSingle::*)(uint8_t*, int32_t, float_t)>(&::Fusion::ElementReaderWriterSingle::Write)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f9aff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterSingle>(),
                        {"Write", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ElementReaderWriterSingle.GetElementWordCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::ElementReaderWriterSingle::*)()>(&::Fusion::ElementReaderWriterSingle::GetElementWordCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f9b004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterSingle>(),
                        {"GetElementWordCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ElementReaderWriterSingle.GetElementHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::ElementReaderWriterSingle::*)(float_t)>(&::Fusion::ElementReaderWriterSingle::GetElementHashCode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f9b00c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterSingle>(),
                        {"GetElementHashCode", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ElementReaderWriterSingle.GetInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::IElementReaderWriter_1<float_t>* (*)()>(&::Fusion::ElementReaderWriterSingle::GetInstance)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5f9b028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterSingle>(),
                        {"GetInstance", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::ElementReaderWriterSingle::setStaticF__instance(::Fusion::IElementReaderWriter_1<float_t>*  value)  {
::cordl_internals::setStaticField<::Fusion::IElementReaderWriter_1<float_t>*, "_instance", ::Fusion::ElementReaderWriterSingle>(std::forward<::Fusion::IElementReaderWriter_1<float_t>*>(value));
}
inline ::Fusion::IElementReaderWriter_1<float_t>* Fusion::ElementReaderWriterSingle::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::Fusion::IElementReaderWriter_1<float_t>*, "_instance", ::Fusion::ElementReaderWriterSingle>();
}
inline float_t Fusion::ElementReaderWriterSingle::Read(uint8_t*  data, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterSingle>(),
                        {"Read", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, data, index);
}
inline ::by_ref<float_t> Fusion::ElementReaderWriterSingle::ReadRef(uint8_t*  data, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterSingle>(),
                        {"ReadRef", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<float_t>>(*this, ___internal_method, data, index);
}
inline void Fusion::ElementReaderWriterSingle::Write(uint8_t*  data, int32_t  index, float_t  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterSingle>(),
                        {"Write", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, data, index, val);
}
inline int32_t Fusion::ElementReaderWriterSingle::GetElementWordCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterSingle>(),
                        {"GetElementWordCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t Fusion::ElementReaderWriterSingle::GetElementHashCode(float_t  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterSingle>(),
                        {"GetElementHashCode", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, val);
}
inline ::Fusion::IElementReaderWriter_1<float_t>* Fusion::ElementReaderWriterSingle::GetInstance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterSingle>(),
                        {"GetInstance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::IElementReaderWriter_1<float_t>*>(nullptr, ___internal_method);
}
/// @brief Convert operator to "::Fusion::IElementReaderWriter_1<float_t>"
constexpr  Fusion::ElementReaderWriterSingle::operator ::Fusion::IElementReaderWriter_1<float_t>*()  {
return static_cast<::Fusion::IElementReaderWriter_1<float_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::IElementReaderWriter_1<float_t>"
constexpr ::Fusion::IElementReaderWriter_1<float_t>* Fusion::ElementReaderWriterSingle::i___Fusion__IElementReaderWriter_1_float_t_()  {
return static_cast<::Fusion::IElementReaderWriter_1<float_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
constexpr ::Fusion::ElementReaderWriterSingle::ElementReaderWriterSingle()   {
}
