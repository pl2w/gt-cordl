#pragma once
// IWYU pragma private; include "GlobalNamespace/ReliableStateData.hpp"
#include "Fusion/CodeGen/zzzz__FixedStorage@10_impl.hpp"
#include "GlobalNamespace/zzzz__ReliableStateData_def.hpp"
#include "Fusion/zzzz__INetworkStruct_def.hpp"
#include "Fusion/zzzz__NetworkArray_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ReliableStateData.get_Header
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::ReliableStateData::*)()>(&::GlobalNamespace::ReliableStateData::get_Header)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5748314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReliableStateData>(),
                        {"get_Header", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ReliableStateData.set_Header
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ReliableStateData::*)(int64_t)>(&::GlobalNamespace::ReliableStateData::set_Header)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x574831c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReliableStateData>(),
                        {"set_Header", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ReliableStateData.get_TransferrableStates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkArray_1<int64_t> (::GlobalNamespace::ReliableStateData::*)()>(&::GlobalNamespace::ReliableStateData::get_TransferrableStates)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5748324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReliableStateData>(),
                        {"get_TransferrableStates", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ReliableStateData.get_WearablesPackedState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ReliableStateData::*)()>(&::GlobalNamespace::ReliableStateData::get_WearablesPackedState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5748404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReliableStateData>(),
                        {"get_WearablesPackedState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ReliableStateData.set_WearablesPackedState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ReliableStateData::*)(int32_t)>(&::GlobalNamespace::ReliableStateData::set_WearablesPackedState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x574840c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReliableStateData>(),
                        {"set_WearablesPackedState", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ReliableStateData.get_LThrowableProjectileIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ReliableStateData::*)()>(&::GlobalNamespace::ReliableStateData::get_LThrowableProjectileIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5748414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReliableStateData>(),
                        {"get_LThrowableProjectileIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ReliableStateData.set_LThrowableProjectileIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ReliableStateData::*)(int32_t)>(&::GlobalNamespace::ReliableStateData::set_LThrowableProjectileIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x574841c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReliableStateData>(),
                        {"set_LThrowableProjectileIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ReliableStateData.get_RThrowableProjectileIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ReliableStateData::*)()>(&::GlobalNamespace::ReliableStateData::get_RThrowableProjectileIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5748424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReliableStateData>(),
                        {"get_RThrowableProjectileIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ReliableStateData.set_RThrowableProjectileIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ReliableStateData::*)(int32_t)>(&::GlobalNamespace::ReliableStateData::set_RThrowableProjectileIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x574842c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReliableStateData>(),
                        {"set_RThrowableProjectileIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ReliableStateData.get_SizeLayerMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ReliableStateData::*)()>(&::GlobalNamespace::ReliableStateData::get_SizeLayerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5748434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReliableStateData>(),
                        {"get_SizeLayerMask", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ReliableStateData.set_SizeLayerMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ReliableStateData::*)(int32_t)>(&::GlobalNamespace::ReliableStateData::set_SizeLayerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x574843c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReliableStateData>(),
                        {"set_SizeLayerMask", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ReliableStateData.get_RandomThrowableIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ReliableStateData::*)()>(&::GlobalNamespace::ReliableStateData::get_RandomThrowableIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5748444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReliableStateData>(),
                        {"get_RandomThrowableIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ReliableStateData.set_RandomThrowableIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ReliableStateData::*)(int32_t)>(&::GlobalNamespace::ReliableStateData::set_RandomThrowableIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x574844c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReliableStateData>(),
                        {"set_RandomThrowableIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ReliableStateData.get_PackedBeads
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::ReliableStateData::*)()>(&::GlobalNamespace::ReliableStateData::get_PackedBeads)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5748454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReliableStateData>(),
                        {"get_PackedBeads", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ReliableStateData.set_PackedBeads
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ReliableStateData::*)(int64_t)>(&::GlobalNamespace::ReliableStateData::set_PackedBeads)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x574845c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReliableStateData>(),
                        {"set_PackedBeads", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ReliableStateData.get_PackedBeadsMoreThan6
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::ReliableStateData::*)()>(&::GlobalNamespace::ReliableStateData::get_PackedBeadsMoreThan6)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5748464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReliableStateData>(),
                        {"get_PackedBeadsMoreThan6", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ReliableStateData.set_PackedBeadsMoreThan6
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ReliableStateData::*)(int64_t)>(&::GlobalNamespace::ReliableStateData::set_PackedBeadsMoreThan6)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x574846c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReliableStateData>(),
                        {"set_PackedBeadsMoreThan6", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int64_t& GlobalNamespace::ReliableStateData::__cordl_internal_get__Header_k__BackingField()  {
return this->____Header_k__BackingField;
}
constexpr int64_t const& GlobalNamespace::ReliableStateData::__cordl_internal_get__Header_k__BackingField() const {
return this->____Header_k__BackingField;
}
constexpr void GlobalNamespace::ReliableStateData::__cordl_internal_set__Header_k__BackingField(int64_t  value)  {
this->____Header_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::ReliableStateData::__cordl_internal_get__WearablesPackedState_k__BackingField()  {
return this->____WearablesPackedState_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::ReliableStateData::__cordl_internal_get__WearablesPackedState_k__BackingField() const {
return this->____WearablesPackedState_k__BackingField;
}
constexpr void GlobalNamespace::ReliableStateData::__cordl_internal_set__WearablesPackedState_k__BackingField(int32_t  value)  {
this->____WearablesPackedState_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::ReliableStateData::__cordl_internal_get__LThrowableProjectileIndex_k__BackingField()  {
return this->____LThrowableProjectileIndex_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::ReliableStateData::__cordl_internal_get__LThrowableProjectileIndex_k__BackingField() const {
return this->____LThrowableProjectileIndex_k__BackingField;
}
constexpr void GlobalNamespace::ReliableStateData::__cordl_internal_set__LThrowableProjectileIndex_k__BackingField(int32_t  value)  {
this->____LThrowableProjectileIndex_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::ReliableStateData::__cordl_internal_get__RThrowableProjectileIndex_k__BackingField()  {
return this->____RThrowableProjectileIndex_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::ReliableStateData::__cordl_internal_get__RThrowableProjectileIndex_k__BackingField() const {
return this->____RThrowableProjectileIndex_k__BackingField;
}
constexpr void GlobalNamespace::ReliableStateData::__cordl_internal_set__RThrowableProjectileIndex_k__BackingField(int32_t  value)  {
this->____RThrowableProjectileIndex_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::ReliableStateData::__cordl_internal_get__SizeLayerMask_k__BackingField()  {
return this->____SizeLayerMask_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::ReliableStateData::__cordl_internal_get__SizeLayerMask_k__BackingField() const {
return this->____SizeLayerMask_k__BackingField;
}
constexpr void GlobalNamespace::ReliableStateData::__cordl_internal_set__SizeLayerMask_k__BackingField(int32_t  value)  {
this->____SizeLayerMask_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::ReliableStateData::__cordl_internal_get__RandomThrowableIndex_k__BackingField()  {
return this->____RandomThrowableIndex_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::ReliableStateData::__cordl_internal_get__RandomThrowableIndex_k__BackingField() const {
return this->____RandomThrowableIndex_k__BackingField;
}
constexpr void GlobalNamespace::ReliableStateData::__cordl_internal_set__RandomThrowableIndex_k__BackingField(int32_t  value)  {
this->____RandomThrowableIndex_k__BackingField = value;
}
constexpr int64_t& GlobalNamespace::ReliableStateData::__cordl_internal_get__PackedBeads_k__BackingField()  {
return this->____PackedBeads_k__BackingField;
}
constexpr int64_t const& GlobalNamespace::ReliableStateData::__cordl_internal_get__PackedBeads_k__BackingField() const {
return this->____PackedBeads_k__BackingField;
}
constexpr void GlobalNamespace::ReliableStateData::__cordl_internal_set__PackedBeads_k__BackingField(int64_t  value)  {
this->____PackedBeads_k__BackingField = value;
}
constexpr int64_t& GlobalNamespace::ReliableStateData::__cordl_internal_get__PackedBeadsMoreThan6_k__BackingField()  {
return this->____PackedBeadsMoreThan6_k__BackingField;
}
constexpr int64_t const& GlobalNamespace::ReliableStateData::__cordl_internal_get__PackedBeadsMoreThan6_k__BackingField() const {
return this->____PackedBeadsMoreThan6_k__BackingField;
}
constexpr void GlobalNamespace::ReliableStateData::__cordl_internal_set__PackedBeadsMoreThan6_k__BackingField(int64_t  value)  {
this->____PackedBeadsMoreThan6_k__BackingField = value;
}
constexpr ::Fusion::CodeGen::FixedStorage@10& GlobalNamespace::ReliableStateData::__cordl_internal_get__TransferrableStates()  {
return this->____TransferrableStates;
}
constexpr ::Fusion::CodeGen::FixedStorage@10 const& GlobalNamespace::ReliableStateData::__cordl_internal_get__TransferrableStates() const {
return this->____TransferrableStates;
}
constexpr void GlobalNamespace::ReliableStateData::__cordl_internal_set__TransferrableStates(::Fusion::CodeGen::FixedStorage@10  value)  {
this->____TransferrableStates = value;
}
inline int64_t GlobalNamespace::ReliableStateData::get_Header()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReliableStateData>(),
                        {"get_Header", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method);
}
inline void GlobalNamespace::ReliableStateData::set_Header(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReliableStateData>(),
                        {"set_Header", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Fusion::NetworkArray_1<int64_t> GlobalNamespace::ReliableStateData::get_TransferrableStates()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReliableStateData>(),
                        {"get_TransferrableStates", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkArray_1<int64_t>>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::ReliableStateData::get_WearablesPackedState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReliableStateData>(),
                        {"get_WearablesPackedState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::ReliableStateData::set_WearablesPackedState(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReliableStateData>(),
                        {"set_WearablesPackedState", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t GlobalNamespace::ReliableStateData::get_LThrowableProjectileIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReliableStateData>(),
                        {"get_LThrowableProjectileIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::ReliableStateData::set_LThrowableProjectileIndex(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReliableStateData>(),
                        {"set_LThrowableProjectileIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t GlobalNamespace::ReliableStateData::get_RThrowableProjectileIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReliableStateData>(),
                        {"get_RThrowableProjectileIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::ReliableStateData::set_RThrowableProjectileIndex(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReliableStateData>(),
                        {"set_RThrowableProjectileIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t GlobalNamespace::ReliableStateData::get_SizeLayerMask()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReliableStateData>(),
                        {"get_SizeLayerMask", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::ReliableStateData::set_SizeLayerMask(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReliableStateData>(),
                        {"set_SizeLayerMask", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t GlobalNamespace::ReliableStateData::get_RandomThrowableIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReliableStateData>(),
                        {"get_RandomThrowableIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::ReliableStateData::set_RandomThrowableIndex(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReliableStateData>(),
                        {"set_RandomThrowableIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int64_t GlobalNamespace::ReliableStateData::get_PackedBeads()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReliableStateData>(),
                        {"get_PackedBeads", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method);
}
inline void GlobalNamespace::ReliableStateData::set_PackedBeads(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReliableStateData>(),
                        {"set_PackedBeads", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int64_t GlobalNamespace::ReliableStateData::get_PackedBeadsMoreThan6()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReliableStateData>(),
                        {"get_PackedBeadsMoreThan6", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method);
}
inline void GlobalNamespace::ReliableStateData::set_PackedBeadsMoreThan6(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ReliableStateData>(),
                        {"set_PackedBeadsMoreThan6", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr  GlobalNamespace::ReliableStateData::operator ::Fusion::INetworkStruct*()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* GlobalNamespace::ReliableStateData::i___Fusion__INetworkStruct()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_Header_k__BackingField", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_WearablesPackedState_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_LThrowableProjectileIndex_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_RThrowableProjectileIndex_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_SizeLayerMask_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_RandomThrowableIndex_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_PackedBeads_k__BackingField", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_PackedBeadsMoreThan6_k__BackingField", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_TransferrableStates", ty: "::Fusion::CodeGen::FixedStorage@10", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ReliableStateData::ReliableStateData(int64_t  _Header_k__BackingField, int32_t  _WearablesPackedState_k__BackingField, int32_t  _LThrowableProjectileIndex_k__BackingField, int32_t  _RThrowableProjectileIndex_k__BackingField, int32_t  _SizeLayerMask_k__BackingField, int32_t  _RandomThrowableIndex_k__BackingField, int64_t  _PackedBeads_k__BackingField, int64_t  _PackedBeadsMoreThan6_k__BackingField, ::Fusion::CodeGen::FixedStorage@10  _TransferrableStates) noexcept  {
this->_Header_k__BackingField = _Header_k__BackingField;
this->_WearablesPackedState_k__BackingField = _WearablesPackedState_k__BackingField;
this->_LThrowableProjectileIndex_k__BackingField = _LThrowableProjectileIndex_k__BackingField;
this->_RThrowableProjectileIndex_k__BackingField = _RThrowableProjectileIndex_k__BackingField;
this->_SizeLayerMask_k__BackingField = _SizeLayerMask_k__BackingField;
this->_RandomThrowableIndex_k__BackingField = _RandomThrowableIndex_k__BackingField;
this->_PackedBeads_k__BackingField = _PackedBeads_k__BackingField;
this->_PackedBeadsMoreThan6_k__BackingField = _PackedBeadsMoreThan6_k__BackingField;
this->_TransferrableStates = _TransferrableStates;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ReliableStateData::ReliableStateData()   {
}
