#pragma once
// IWYU pragma private; include "GlobalNamespace/PaintbrawlData.hpp"
#include "Fusion/CodeGen/zzzz__FixedStorage@20_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaPaintbrawlManager_PaintbrawlState_impl.hpp"
#include "GlobalNamespace/zzzz__PaintbrawlData_def.hpp"
#include "Fusion/zzzz__INetworkStruct_def.hpp"
#include "Fusion/zzzz__NetworkArray_1_def.hpp"
#include "GlobalNamespace/zzzz__GorillaPaintbrawlManager_PaintbrawlStatus_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PaintbrawlData.get_playerLivesArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkArray_1<int32_t> (::GlobalNamespace::PaintbrawlData::*)()>(&::GlobalNamespace::PaintbrawlData::get_playerLivesArray)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x579b23c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaintbrawlData>(),
                        {"get_playerLivesArray", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PaintbrawlData.get_playerActorNumberArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkArray_1<int32_t> (::GlobalNamespace::PaintbrawlData::*)()>(&::GlobalNamespace::PaintbrawlData::get_playerActorNumberArray)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x579b31c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaintbrawlData>(),
                        {"get_playerActorNumberArray", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PaintbrawlData.get_playerStatusArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkArray_1<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus> (::GlobalNamespace::PaintbrawlData::*)()>(&::GlobalNamespace::PaintbrawlData::get_playerStatusArray)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x579b3fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaintbrawlData>(),
                        {"get_playerStatusArray", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlState& GlobalNamespace::PaintbrawlData::__cordl_internal_get_currentPaintbrawlState()  {
return this->___currentPaintbrawlState;
}
constexpr ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlState const& GlobalNamespace::PaintbrawlData::__cordl_internal_get_currentPaintbrawlState() const {
return this->___currentPaintbrawlState;
}
constexpr void GlobalNamespace::PaintbrawlData::__cordl_internal_set_currentPaintbrawlState(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlState  value)  {
this->___currentPaintbrawlState = value;
}
constexpr ::Fusion::CodeGen::FixedStorage@20& GlobalNamespace::PaintbrawlData::__cordl_internal_get__playerLivesArray()  {
return this->____playerLivesArray;
}
constexpr ::Fusion::CodeGen::FixedStorage@20 const& GlobalNamespace::PaintbrawlData::__cordl_internal_get__playerLivesArray() const {
return this->____playerLivesArray;
}
constexpr void GlobalNamespace::PaintbrawlData::__cordl_internal_set__playerLivesArray(::Fusion::CodeGen::FixedStorage@20  value)  {
this->____playerLivesArray = value;
}
constexpr ::Fusion::CodeGen::FixedStorage@20& GlobalNamespace::PaintbrawlData::__cordl_internal_get__playerActorNumberArray()  {
return this->____playerActorNumberArray;
}
constexpr ::Fusion::CodeGen::FixedStorage@20 const& GlobalNamespace::PaintbrawlData::__cordl_internal_get__playerActorNumberArray() const {
return this->____playerActorNumberArray;
}
constexpr void GlobalNamespace::PaintbrawlData::__cordl_internal_set__playerActorNumberArray(::Fusion::CodeGen::FixedStorage@20  value)  {
this->____playerActorNumberArray = value;
}
constexpr ::Fusion::CodeGen::FixedStorage@20& GlobalNamespace::PaintbrawlData::__cordl_internal_get__playerStatusArray()  {
return this->____playerStatusArray;
}
constexpr ::Fusion::CodeGen::FixedStorage@20 const& GlobalNamespace::PaintbrawlData::__cordl_internal_get__playerStatusArray() const {
return this->____playerStatusArray;
}
constexpr void GlobalNamespace::PaintbrawlData::__cordl_internal_set__playerStatusArray(::Fusion::CodeGen::FixedStorage@20  value)  {
this->____playerStatusArray = value;
}
inline ::Fusion::NetworkArray_1<int32_t> GlobalNamespace::PaintbrawlData::get_playerLivesArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaintbrawlData>(),
                        {"get_playerLivesArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkArray_1<int32_t>>(*this, ___internal_method);
}
inline ::Fusion::NetworkArray_1<int32_t> GlobalNamespace::PaintbrawlData::get_playerActorNumberArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaintbrawlData>(),
                        {"get_playerActorNumberArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkArray_1<int32_t>>(*this, ___internal_method);
}
inline ::Fusion::NetworkArray_1<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus> GlobalNamespace::PaintbrawlData::get_playerStatusArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaintbrawlData>(),
                        {"get_playerStatusArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkArray_1<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>>(*this, ___internal_method);
}
/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr  GlobalNamespace::PaintbrawlData::operator ::Fusion::INetworkStruct*()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* GlobalNamespace::PaintbrawlData::i___Fusion__INetworkStruct()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "currentPaintbrawlState", ty: "::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlState", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_playerLivesArray", ty: "::Fusion::CodeGen::FixedStorage@20", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_playerActorNumberArray", ty: "::Fusion::CodeGen::FixedStorage@20", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_playerStatusArray", ty: "::Fusion::CodeGen::FixedStorage@20", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::PaintbrawlData::PaintbrawlData(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlState  currentPaintbrawlState, ::Fusion::CodeGen::FixedStorage@20  _playerLivesArray, ::Fusion::CodeGen::FixedStorage@20  _playerActorNumberArray, ::Fusion::CodeGen::FixedStorage@20  _playerStatusArray) noexcept  {
this->currentPaintbrawlState = currentPaintbrawlState;
this->_playerLivesArray = _playerLivesArray;
this->_playerActorNumberArray = _playerActorNumberArray;
this->_playerStatusArray = _playerStatusArray;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PaintbrawlData::PaintbrawlData()   {
}
