#pragma once
// IWYU pragma private; include "Fusion/CodeGen/ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionPlayer.hpp"
#include "Fusion/CodeGen/zzzz__ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionPlayer_def.hpp"
#include "Fusion/zzzz__IElementReaderWriter_1_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/Fusion/zzzz__FusionPlayer_def.hpp"
//  Writing Method size for method: ::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionPlayer.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer (::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionPlayer::*)(uint8_t*, int32_t)>(&::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionPlayer::Read)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9f6634c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionPlayer>(),
                        {"Read", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionPlayer.ReadRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer> (::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionPlayer::*)(uint8_t*, int32_t)>(&::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionPlayer::ReadRef)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9f6636c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionPlayer>(),
                        {"ReadRef", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionPlayer.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionPlayer::*)(uint8_t*, int32_t, ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer)>(&::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionPlayer::Write)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9f6637c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionPlayer>(),
                        {"Write", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionPlayer.GetElementWordCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionPlayer::*)()>(&::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionPlayer::GetElementWordCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f6639c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionPlayer>(),
                        {"GetElementWordCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionPlayer.GetElementHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionPlayer::*)(::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer)>(&::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionPlayer::GetElementHashCode)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9f663a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionPlayer>(),
                        {"GetElementHashCode", {}, {::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionPlayer.GetInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::IElementReaderWriter_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer>* (*)()>(&::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionPlayer::GetInstance)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9f63ccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionPlayer>(),
                        {"GetInstance", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionPlayer::setStaticF_Instance(::Fusion::IElementReaderWriter_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer>*  value)  {
::cordl_internals::setStaticField<::Fusion::IElementReaderWriter_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer>*, "Instance", ::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionPlayer>(std::forward<::Fusion::IElementReaderWriter_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer>*>(value));
}
inline ::Fusion::IElementReaderWriter_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer>* Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionPlayer::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Fusion::IElementReaderWriter_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer>*, "Instance", ::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionPlayer>();
}
inline ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionPlayer::Read(uint8_t*  data, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionPlayer>(),
                        {"Read", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer>(*this, ___internal_method, data, index);
}
inline ::by_ref<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer> Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionPlayer::ReadRef(uint8_t*  data, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionPlayer>(),
                        {"ReadRef", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer>>(*this, ___internal_method, data, index);
}
inline void Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionPlayer::Write(uint8_t*  data, int32_t  index, ::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionPlayer>(),
                        {"Write", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, data, index, val);
}
inline int32_t Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionPlayer::GetElementWordCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionPlayer>(),
                        {"GetElementWordCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionPlayer::GetElementHashCode(::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionPlayer>(),
                        {"GetElementHashCode", {}, {::i2c::type_of<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, val);
}
inline ::Fusion::IElementReaderWriter_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer>* Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionPlayer::GetInstance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionPlayer>(),
                        {"GetInstance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::IElementReaderWriter_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer>*>(nullptr, ___internal_method);
}
/// @brief Convert operator to "::Fusion::IElementReaderWriter_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer>"
constexpr  Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionPlayer::operator ::Fusion::IElementReaderWriter_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer>*()  {
return static_cast<::Fusion::IElementReaderWriter_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::IElementReaderWriter_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer>"
constexpr ::Fusion::IElementReaderWriter_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer>* Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionPlayer::i___Fusion__IElementReaderWriter_1___Meta__XR__MultiplayerBlocks__Colocation__Fusion__FusionPlayer_()  {
return static_cast<::Fusion::IElementReaderWriter_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
constexpr ::Fusion::CodeGen::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionPlayer::ReaderWriter@Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionPlayer()   {
}
