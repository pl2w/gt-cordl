#pragma once
// IWYU pragma private; include "GlobalNamespace/ElementReaderWriterBoolean.hpp"
#include "GlobalNamespace/zzzz__ElementReaderWriterBoolean_def.hpp"
#include "Fusion/zzzz__IElementReaderWriter_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ElementReaderWriterBoolean.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ElementReaderWriterBoolean::*)(uint8_t*, int32_t)>(&::GlobalNamespace::ElementReaderWriterBoolean::Read)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f6b9e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ElementReaderWriterBoolean>(),
                        {"Read", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ElementReaderWriterBoolean.ReadRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<bool> (::GlobalNamespace::ElementReaderWriterBoolean::*)(uint8_t*, int32_t)>(&::GlobalNamespace::ElementReaderWriterBoolean::ReadRef)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5f6b9fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ElementReaderWriterBoolean>(),
                        {"ReadRef", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ElementReaderWriterBoolean.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ElementReaderWriterBoolean::*)(uint8_t*, int32_t, bool)>(&::GlobalNamespace::ElementReaderWriterBoolean::Write)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f6ba48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ElementReaderWriterBoolean>(),
                        {"Write", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ElementReaderWriterBoolean.GetElementWordCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ElementReaderWriterBoolean::*)()>(&::GlobalNamespace::ElementReaderWriterBoolean::GetElementWordCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f6ba58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ElementReaderWriterBoolean>(),
                        {"GetElementWordCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ElementReaderWriterBoolean.GetElementHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ElementReaderWriterBoolean::*)(bool)>(&::GlobalNamespace::ElementReaderWriterBoolean::GetElementHashCode)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5f6ba60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ElementReaderWriterBoolean>(),
                        {"GetElementHashCode", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ElementReaderWriterBoolean.GetInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::IElementReaderWriter_1<bool>* (*)()>(&::GlobalNamespace::ElementReaderWriterBoolean::GetInstance)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5f6ba94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ElementReaderWriterBoolean>(),
                        {"GetInstance", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ElementReaderWriterBoolean::setStaticF_Instance(::Fusion::IElementReaderWriter_1<bool>*  value)  {
::cordl_internals::setStaticField<::Fusion::IElementReaderWriter_1<bool>*, "Instance", ::GlobalNamespace::ElementReaderWriterBoolean>(std::forward<::Fusion::IElementReaderWriter_1<bool>*>(value));
}
inline ::Fusion::IElementReaderWriter_1<bool>* GlobalNamespace::ElementReaderWriterBoolean::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Fusion::IElementReaderWriter_1<bool>*, "Instance", ::GlobalNamespace::ElementReaderWriterBoolean>();
}
inline bool GlobalNamespace::ElementReaderWriterBoolean::Read(uint8_t*  data, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ElementReaderWriterBoolean>(),
                        {"Read", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, data, index);
}
inline ::by_ref<bool> GlobalNamespace::ElementReaderWriterBoolean::ReadRef(uint8_t*  data, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ElementReaderWriterBoolean>(),
                        {"ReadRef", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<bool>>(*this, ___internal_method, data, index);
}
inline void GlobalNamespace::ElementReaderWriterBoolean::Write(uint8_t*  data, int32_t  index, bool  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ElementReaderWriterBoolean>(),
                        {"Write", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, data, index, val);
}
inline int32_t GlobalNamespace::ElementReaderWriterBoolean::GetElementWordCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ElementReaderWriterBoolean>(),
                        {"GetElementWordCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::ElementReaderWriterBoolean::GetElementHashCode(bool  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ElementReaderWriterBoolean>(),
                        {"GetElementHashCode", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, val);
}
inline ::Fusion::IElementReaderWriter_1<bool>* GlobalNamespace::ElementReaderWriterBoolean::GetInstance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ElementReaderWriterBoolean>(),
                        {"GetInstance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::IElementReaderWriter_1<bool>*>(nullptr, ___internal_method);
}
/// @brief Convert operator to "::Fusion::IElementReaderWriter_1<bool>"
constexpr  GlobalNamespace::ElementReaderWriterBoolean::operator ::Fusion::IElementReaderWriter_1<bool>*()  {
return static_cast<::Fusion::IElementReaderWriter_1<bool>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::IElementReaderWriter_1<bool>"
constexpr ::Fusion::IElementReaderWriter_1<bool>* GlobalNamespace::ElementReaderWriterBoolean::i___Fusion__IElementReaderWriter_1_bool_()  {
return static_cast<::Fusion::IElementReaderWriter_1<bool>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ElementReaderWriterBoolean::ElementReaderWriterBoolean()   {
}
