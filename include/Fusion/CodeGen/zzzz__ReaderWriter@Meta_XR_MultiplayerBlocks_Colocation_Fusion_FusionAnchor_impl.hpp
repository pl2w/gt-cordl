#pragma once
// IWYU pragma private; include "Fusion/CodeGen/ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionAnchor.hpp"
#include "Fusion/CodeGen/zzzz__ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionAnchor_def.hpp"
#include "Fusion/zzzz__IElementReaderWriter_1_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/Fusion/zzzz__FusionAnchor_def.hpp"
//  Writing Method size for method: ::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionAnchor.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor (::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionAnchor::*)(uint8_t*, int32_t)>(&::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionAnchor::Read)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9f66268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionAnchor>(),
                        {"Read", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionAnchor.ReadRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor> (::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionAnchor::*)(uint8_t*, int32_t)>(&::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionAnchor::ReadRef)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9f66280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionAnchor>(),
                        {"ReadRef", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionAnchor.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionAnchor::*)(uint8_t*, int32_t, ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor)>(&::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionAnchor::Write)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9f66290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionAnchor>(),
                        {"Write", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionAnchor.GetElementWordCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionAnchor::*)()>(&::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionAnchor::GetElementWordCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f662a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionAnchor>(),
                        {"GetElementWordCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionAnchor.GetElementHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionAnchor::*)(::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor)>(&::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionAnchor::GetElementHashCode)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9f662b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionAnchor>(),
                        {"GetElementHashCode", {}, {::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionAnchor.GetInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::IElementReaderWriter_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor>* (*)()>(&::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionAnchor::GetInstance)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9f63b94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionAnchor>(),
                        {"GetInstance", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionAnchor::setStaticF_Instance(::Fusion::IElementReaderWriter_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor>*  value)  {
::cordl_internals::setStaticField<::Fusion::IElementReaderWriter_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor>*, "Instance", ::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionAnchor>(std::forward<::Fusion::IElementReaderWriter_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor>*>(value));
}
inline ::Fusion::IElementReaderWriter_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor>* Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionAnchor::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Fusion::IElementReaderWriter_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor>*, "Instance", ::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionAnchor>();
}
inline ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionAnchor::Read(uint8_t*  data, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionAnchor>(),
                        {"Read", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor>(*this, ___internal_method, data, index);
}
inline ::by_ref<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor> Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionAnchor::ReadRef(uint8_t*  data, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionAnchor>(),
                        {"ReadRef", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor>>(*this, ___internal_method, data, index);
}
inline void Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionAnchor::Write(uint8_t*  data, int32_t  index, ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionAnchor>(),
                        {"Write", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, data, index, val);
}
inline int32_t Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionAnchor::GetElementWordCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionAnchor>(),
                        {"GetElementWordCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionAnchor::GetElementHashCode(::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionAnchor>(),
                        {"GetElementHashCode", {}, {::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, val);
}
inline ::Fusion::IElementReaderWriter_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor>* Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionAnchor::GetInstance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionAnchor>(),
                        {"GetInstance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::IElementReaderWriter_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor>*>(nullptr, ___internal_method);
}
/// @brief Convert operator to "::Fusion::IElementReaderWriter_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor>"
constexpr  Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionAnchor::operator ::Fusion::IElementReaderWriter_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor>*()  {
return static_cast<::Fusion::IElementReaderWriter_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::IElementReaderWriter_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor>"
constexpr ::Fusion::IElementReaderWriter_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor>* Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionAnchor::i___Fusion__IElementReaderWriter_1___Meta__XR__MultiplayerBlocks__Colocation__Fusion__FusionAnchor_()  {
return static_cast<::Fusion::IElementReaderWriter_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionAnchor>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
constexpr ::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionAnchor::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionAnchor()   {
}
