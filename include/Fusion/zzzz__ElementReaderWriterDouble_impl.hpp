#pragma once
// IWYU pragma private; include "Fusion/ElementReaderWriterDouble.hpp"
#include "Fusion/zzzz__ElementReaderWriterDouble_def.hpp"
#include "Fusion/zzzz__IElementReaderWriter_1_def.hpp"
//  Writing Method size for method: ::Fusion::ElementReaderWriterDouble.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::ElementReaderWriterDouble::*)(uint8_t*, int32_t)>(&::Fusion::ElementReaderWriterDouble::Read)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f9b0ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterDouble>(),
                        {"Read", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ElementReaderWriterDouble.ReadRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<double_t> (::Fusion::ElementReaderWriterDouble::*)(uint8_t*, int32_t)>(&::Fusion::ElementReaderWriterDouble::ReadRef)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f9b0b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterDouble>(),
                        {"ReadRef", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ElementReaderWriterDouble.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ElementReaderWriterDouble::*)(uint8_t*, int32_t, double_t)>(&::Fusion::ElementReaderWriterDouble::Write)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f9b0c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterDouble>(),
                        {"Write", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ElementReaderWriterDouble.GetElementWordCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::ElementReaderWriterDouble::*)()>(&::Fusion::ElementReaderWriterDouble::GetElementWordCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f9b0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterDouble>(),
                        {"GetElementWordCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ElementReaderWriterDouble.GetElementHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::ElementReaderWriterDouble::*)(double_t)>(&::Fusion::ElementReaderWriterDouble::GetElementHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f9b0d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterDouble>(),
                        {"GetElementHashCode", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ElementReaderWriterDouble.GetInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::IElementReaderWriter_1<double_t>* (*)()>(&::Fusion::ElementReaderWriterDouble::GetInstance)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5f9b0f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterDouble>(),
                        {"GetInstance", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::ElementReaderWriterDouble::setStaticF__instance(::Fusion::IElementReaderWriter_1<double_t>*  value)  {
::cordl_internals::setStaticField<::Fusion::IElementReaderWriter_1<double_t>*, "_instance", ::Fusion::ElementReaderWriterDouble>(std::forward<::Fusion::IElementReaderWriter_1<double_t>*>(value));
}
inline ::Fusion::IElementReaderWriter_1<double_t>* Fusion::ElementReaderWriterDouble::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::Fusion::IElementReaderWriter_1<double_t>*, "_instance", ::Fusion::ElementReaderWriterDouble>();
}
inline double_t Fusion::ElementReaderWriterDouble::Read(uint8_t*  data, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterDouble>(),
                        {"Read", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method, data, index);
}
inline ::by_ref<double_t> Fusion::ElementReaderWriterDouble::ReadRef(uint8_t*  data, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterDouble>(),
                        {"ReadRef", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<double_t>>(*this, ___internal_method, data, index);
}
inline void Fusion::ElementReaderWriterDouble::Write(uint8_t*  data, int32_t  index, double_t  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterDouble>(),
                        {"Write", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, data, index, val);
}
inline int32_t Fusion::ElementReaderWriterDouble::GetElementWordCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterDouble>(),
                        {"GetElementWordCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t Fusion::ElementReaderWriterDouble::GetElementHashCode(double_t  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterDouble>(),
                        {"GetElementHashCode", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, val);
}
inline ::Fusion::IElementReaderWriter_1<double_t>* Fusion::ElementReaderWriterDouble::GetInstance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ElementReaderWriterDouble>(),
                        {"GetInstance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::IElementReaderWriter_1<double_t>*>(nullptr, ___internal_method);
}
/// @brief Convert operator to "::Fusion::IElementReaderWriter_1<double_t>"
constexpr  Fusion::ElementReaderWriterDouble::operator ::Fusion::IElementReaderWriter_1<double_t>*()  {
return static_cast<::Fusion::IElementReaderWriter_1<double_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::IElementReaderWriter_1<double_t>"
constexpr ::Fusion::IElementReaderWriter_1<double_t>* Fusion::ElementReaderWriterDouble::i___Fusion__IElementReaderWriter_1_double_t_()  {
return static_cast<::Fusion::IElementReaderWriter_1<double_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
constexpr ::Fusion::ElementReaderWriterDouble::ElementReaderWriterDouble()   {
}
