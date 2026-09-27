#pragma once
// IWYU pragma private; include "Fusion/CodeGen/ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus.hpp"
#include "Fusion/CodeGen/zzzz__ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus_def.hpp"
#include "Fusion/zzzz__IElementReaderWriter_1_def.hpp"
#include "GlobalNamespace/zzzz__GorillaPaintbrawlManager_PaintbrawlStatus_def.hpp"
//  Writing Method size for method: ::Fusion::CodeGen::ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus (::Fusion::CodeGen::ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus::*)(uint8_t*, int32_t)>(&::Fusion::CodeGen::ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus::Read)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e2f20c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus>(),
                        {"Read", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CodeGen::ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus.ReadRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus> (::Fusion::CodeGen::ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus::*)(uint8_t*, int32_t)>(&::Fusion::CodeGen::ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus::ReadRef)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e2f218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus>(),
                        {"ReadRef", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CodeGen::ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CodeGen::ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus::*)(uint8_t*, int32_t, ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus)>(&::Fusion::CodeGen::ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus::Write)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e2f224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus>(),
                        {"Write", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CodeGen::ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus.GetElementWordCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::CodeGen::ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus::*)()>(&::Fusion::CodeGen::ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus::GetElementWordCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e2f230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus>(),
                        {"GetElementWordCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CodeGen::ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus.GetElementHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::CodeGen::ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus::*)(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus)>(&::Fusion::CodeGen::ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus::GetElementHashCode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e2f238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus>(),
                        {"GetElementHashCode", {}, {::i2c::type_of<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CodeGen::ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus.GetInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::IElementReaderWriter_1<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>* (*)()>(&::Fusion::CodeGen::ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus::GetInstance)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5e2f254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus>(),
                        {"GetInstance", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::CodeGen::ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus::setStaticF_Instance(::Fusion::IElementReaderWriter_1<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>*  value)  {
::cordl_internals::setStaticField<::Fusion::IElementReaderWriter_1<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>*, "Instance", ::Fusion::CodeGen::ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus>(std::forward<::Fusion::IElementReaderWriter_1<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>*>(value));
}
inline ::Fusion::IElementReaderWriter_1<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>* Fusion::CodeGen::ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Fusion::IElementReaderWriter_1<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>*, "Instance", ::Fusion::CodeGen::ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus>();
}
inline ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus Fusion::CodeGen::ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus::Read(uint8_t*  data, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus>(),
                        {"Read", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>(*this, ___internal_method, data, index);
}
inline ::by_ref<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus> Fusion::CodeGen::ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus::ReadRef(uint8_t*  data, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus>(),
                        {"ReadRef", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>>(*this, ___internal_method, data, index);
}
inline void Fusion::CodeGen::ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus::Write(uint8_t*  data, int32_t  index, ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus>(),
                        {"Write", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, data, index, val);
}
inline int32_t Fusion::CodeGen::ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus::GetElementWordCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus>(),
                        {"GetElementWordCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t Fusion::CodeGen::ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus::GetElementHashCode(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus>(),
                        {"GetElementHashCode", {}, {::i2c::type_of<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, val);
}
inline ::Fusion::IElementReaderWriter_1<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>* Fusion::CodeGen::ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus::GetInstance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus>(),
                        {"GetInstance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::IElementReaderWriter_1<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>*>(nullptr, ___internal_method);
}
/// @brief Convert operator to "::Fusion::IElementReaderWriter_1<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>"
constexpr  Fusion::CodeGen::ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus::operator ::Fusion::IElementReaderWriter_1<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>*()  {
return static_cast<::Fusion::IElementReaderWriter_1<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::IElementReaderWriter_1<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>"
constexpr ::Fusion::IElementReaderWriter_1<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>* Fusion::CodeGen::ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus::i___Fusion__IElementReaderWriter_1___GlobalNamespace__GorillaPaintbrawlManager_PaintbrawlStatus_()  {
return static_cast<::Fusion::IElementReaderWriter_1<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
constexpr ::Fusion::CodeGen::ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus::ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus()   {
}
