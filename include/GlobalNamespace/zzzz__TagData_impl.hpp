#pragma once
// IWYU pragma private; include "GlobalNamespace/TagData.hpp"
#include "Fusion/CodeGen/zzzz__FixedStorage@20_impl.hpp"
#include "Fusion/zzzz__NetworkBool_impl.hpp"
#include "GlobalNamespace/zzzz__TagData_def.hpp"
#include "Fusion/zzzz__INetworkStruct_def.hpp"
#include "Fusion/zzzz__NetworkArray_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TagData.get_infectedPlayerList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkArray_1<int32_t> (::GlobalNamespace::TagData::*)()>(&::GlobalNamespace::TagData::get_infectedPlayerList)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x579c3e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TagData>(),
                        {"get_infectedPlayerList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TagData.get_currentItID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::TagData::*)()>(&::GlobalNamespace::TagData::get_currentItID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x579c4c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TagData>(),
                        {"get_currentItID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TagData.set_currentItID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TagData::*)(int32_t)>(&::GlobalNamespace::TagData::set_currentItID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x579c4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TagData>(),
                        {"set_currentItID", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::TagData::__cordl_internal_get__currentItID_k__BackingField()  {
return this->____currentItID_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::TagData::__cordl_internal_get__currentItID_k__BackingField() const {
return this->____currentItID_k__BackingField;
}
constexpr void GlobalNamespace::TagData::__cordl_internal_set__currentItID_k__BackingField(int32_t  value)  {
this->____currentItID_k__BackingField = value;
}
constexpr ::Fusion::NetworkBool& GlobalNamespace::TagData::__cordl_internal_get_isCurrentlyTag()  {
return this->___isCurrentlyTag;
}
constexpr ::Fusion::NetworkBool const& GlobalNamespace::TagData::__cordl_internal_get_isCurrentlyTag() const {
return this->___isCurrentlyTag;
}
constexpr void GlobalNamespace::TagData::__cordl_internal_set_isCurrentlyTag(::Fusion::NetworkBool  value)  {
this->___isCurrentlyTag = value;
}
constexpr ::Fusion::CodeGen::FixedStorage@20& GlobalNamespace::TagData::__cordl_internal_get__infectedPlayerList()  {
return this->____infectedPlayerList;
}
constexpr ::Fusion::CodeGen::FixedStorage@20 const& GlobalNamespace::TagData::__cordl_internal_get__infectedPlayerList() const {
return this->____infectedPlayerList;
}
constexpr void GlobalNamespace::TagData::__cordl_internal_set__infectedPlayerList(::Fusion::CodeGen::FixedStorage@20  value)  {
this->____infectedPlayerList = value;
}
inline ::Fusion::NetworkArray_1<int32_t> GlobalNamespace::TagData::get_infectedPlayerList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TagData>(),
                        {"get_infectedPlayerList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkArray_1<int32_t>>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::TagData::get_currentItID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TagData>(),
                        {"get_currentItID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::TagData::set_currentItID(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TagData>(),
                        {"set_currentItID", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr  GlobalNamespace::TagData::operator ::Fusion::INetworkStruct*()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* GlobalNamespace::TagData::i___Fusion__INetworkStruct()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_currentItID_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isCurrentlyTag", ty: "::Fusion::NetworkBool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_infectedPlayerList", ty: "::Fusion::CodeGen::FixedStorage@20", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TagData::TagData(int32_t  _currentItID_k__BackingField, ::Fusion::NetworkBool  isCurrentlyTag, ::Fusion::CodeGen::FixedStorage@20  _infectedPlayerList) noexcept  {
this->_currentItID_k__BackingField = _currentItID_k__BackingField;
this->isCurrentlyTag = isCurrentlyTag;
this->_infectedPlayerList = _infectedPlayerList;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TagData::TagData()   {
}
