#pragma once
// IWYU pragma private; include "GorillaTagScripts/FlowersDataStruct.hpp"
#include "Fusion/CodeGen/zzzz__FixedStorage@6_impl.hpp"
#include "GorillaTagScripts/zzzz__FlowersDataStruct_def.hpp"
#include "Fusion/zzzz__INetworkStruct_def.hpp"
#include "Fusion/zzzz__NetworkLinkedList_1_def.hpp"
#include "GorillaTagScripts/zzzz__Flower_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::FlowersDataStruct.get_FlowerCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTagScripts::FlowersDataStruct::*)()>(&::GorillaTagScripts::FlowersDataStruct::get_FlowerCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bbbe94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FlowersDataStruct>(),
                        {"get_FlowerCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FlowersDataStruct.set_FlowerCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::FlowersDataStruct::*)(int32_t)>(&::GorillaTagScripts::FlowersDataStruct::set_FlowerCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bbbe9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FlowersDataStruct>(),
                        {"set_FlowerCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FlowersDataStruct.get_FlowerWateredData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkLinkedList_1<uint8_t> (::GorillaTagScripts::FlowersDataStruct::*)()>(&::GorillaTagScripts::FlowersDataStruct::get_FlowerWateredData)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5bbba04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FlowersDataStruct>(),
                        {"get_FlowerWateredData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FlowersDataStruct.get_FlowerStateData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkLinkedList_1<int32_t> (::GorillaTagScripts::FlowersDataStruct::*)()>(&::GorillaTagScripts::FlowersDataStruct::get_FlowerStateData)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5bbbae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FlowersDataStruct>(),
                        {"get_FlowerStateData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::FlowersDataStruct._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::FlowersDataStruct::*)(::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Flower>>*)>(&::GorillaTagScripts::FlowersDataStruct::_ctor)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x5bbb5a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FlowersDataStruct>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Flower>>*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaTagScripts::FlowersDataStruct::__cordl_internal_get__FlowerCount_k__BackingField()  {
return this->____FlowerCount_k__BackingField;
}
constexpr int32_t const& GorillaTagScripts::FlowersDataStruct::__cordl_internal_get__FlowerCount_k__BackingField() const {
return this->____FlowerCount_k__BackingField;
}
constexpr void GorillaTagScripts::FlowersDataStruct::__cordl_internal_set__FlowerCount_k__BackingField(int32_t  value)  {
this->____FlowerCount_k__BackingField = value;
}
constexpr ::Fusion::CodeGen::FixedStorage@6& GorillaTagScripts::FlowersDataStruct::__cordl_internal_get__FlowerWateredData()  {
return this->____FlowerWateredData;
}
constexpr ::Fusion::CodeGen::FixedStorage@6 const& GorillaTagScripts::FlowersDataStruct::__cordl_internal_get__FlowerWateredData() const {
return this->____FlowerWateredData;
}
constexpr void GorillaTagScripts::FlowersDataStruct::__cordl_internal_set__FlowerWateredData(::Fusion::CodeGen::FixedStorage@6  value)  {
this->____FlowerWateredData = value;
}
constexpr ::Fusion::CodeGen::FixedStorage@6& GorillaTagScripts::FlowersDataStruct::__cordl_internal_get__FlowerStateData()  {
return this->____FlowerStateData;
}
constexpr ::Fusion::CodeGen::FixedStorage@6 const& GorillaTagScripts::FlowersDataStruct::__cordl_internal_get__FlowerStateData() const {
return this->____FlowerStateData;
}
constexpr void GorillaTagScripts::FlowersDataStruct::__cordl_internal_set__FlowerStateData(::Fusion::CodeGen::FixedStorage@6  value)  {
this->____FlowerStateData = value;
}
inline int32_t GorillaTagScripts::FlowersDataStruct::get_FlowerCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FlowersDataStruct>(),
                        {"get_FlowerCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GorillaTagScripts::FlowersDataStruct::set_FlowerCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FlowersDataStruct>(),
                        {"set_FlowerCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Fusion::NetworkLinkedList_1<uint8_t> GorillaTagScripts::FlowersDataStruct::get_FlowerWateredData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FlowersDataStruct>(),
                        {"get_FlowerWateredData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkLinkedList_1<uint8_t>>(*this, ___internal_method);
}
inline ::Fusion::NetworkLinkedList_1<int32_t> GorillaTagScripts::FlowersDataStruct::get_FlowerStateData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FlowersDataStruct>(),
                        {"get_FlowerStateData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkLinkedList_1<int32_t>>(*this, ___internal_method);
}
inline void GorillaTagScripts::FlowersDataStruct::_ctor(::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Flower>>*  allFlowers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::FlowersDataStruct>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Flower>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, allFlowers);
}
/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr  GorillaTagScripts::FlowersDataStruct::operator ::Fusion::INetworkStruct*()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* GorillaTagScripts::FlowersDataStruct::i___Fusion__INetworkStruct()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_FlowerCount_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_FlowerWateredData", ty: "::Fusion::CodeGen::FixedStorage@6", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_FlowerStateData", ty: "::Fusion::CodeGen::FixedStorage@6", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GorillaTagScripts::FlowersDataStruct::FlowersDataStruct(int32_t  _FlowerCount_k__BackingField, ::Fusion::CodeGen::FixedStorage@6  _FlowerWateredData, ::Fusion::CodeGen::FixedStorage@6  _FlowerStateData) noexcept  {
this->_FlowerCount_k__BackingField = _FlowerCount_k__BackingField;
this->_FlowerWateredData = _FlowerWateredData;
this->_FlowerStateData = _FlowerStateData;
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::FlowersDataStruct::FlowersDataStruct()   {
}
