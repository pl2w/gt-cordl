#pragma once
// IWYU pragma private; include "Fusion/Protocol/Snapshot.hpp"
#include "Fusion/Protocol/zzzz__Message_impl.hpp"
#include "Fusion/Protocol/zzzz__SnapshotType_impl.hpp"
#include "Fusion/Protocol/zzzz__Snapshot_def.hpp"
#include "Fusion/Protocol/zzzz__BitStream_def.hpp"
#include "Fusion/Protocol/zzzz__Message_def.hpp"
#include "Fusion/Protocol/zzzz__ProtocolMessageVersion_def.hpp"
#include "Fusion/Protocol/zzzz__SnapshotType_def.hpp"
#include "System/zzzz__Version_def.hpp"
//  Writing Method size for method: ::Fusion::Protocol::Snapshot.get_Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Protocol::Snapshot::*)()>(&::Fusion::Protocol::Snapshot::get_Tick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60251a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::Snapshot*>(),
                        {"get_Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::Snapshot.set_Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::Snapshot::*)(int32_t)>(&::Fusion::Protocol::Snapshot::set_Tick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60251b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::Snapshot*>(),
                        {"set_Tick", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::Snapshot.get_NetworkID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Fusion::Protocol::Snapshot::*)()>(&::Fusion::Protocol::Snapshot::get_NetworkID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60251b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::Snapshot*>(),
                        {"get_NetworkID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::Snapshot.set_NetworkID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::Snapshot::*)(uint32_t)>(&::Fusion::Protocol::Snapshot::set_NetworkID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60251c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::Snapshot*>(),
                        {"set_NetworkID", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::Snapshot.get_SnapshotType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Protocol::SnapshotType (::Fusion::Protocol::Snapshot::*)()>(&::Fusion::Protocol::Snapshot::get_SnapshotType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60251c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::Snapshot*>(),
                        {"get_SnapshotType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::Snapshot.set_SnapshotType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::Snapshot::*)(::Fusion::Protocol::SnapshotType)>(&::Fusion::Protocol::Snapshot::set_SnapshotType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60251d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::Snapshot*>(),
                        {"set_SnapshotType", {}, {::i2c::type_of<::Fusion::Protocol::SnapshotType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::Snapshot.get_TotalSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Protocol::Snapshot::*)()>(&::Fusion::Protocol::Snapshot::get_TotalSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60251d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::Snapshot*>(),
                        {"get_TotalSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::Snapshot.set_TotalSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::Snapshot::*)(int32_t)>(&::Fusion::Protocol::Snapshot::set_TotalSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60251e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::Snapshot*>(),
                        {"set_TotalSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::Snapshot.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Protocol::Snapshot::*)()>(&::Fusion::Protocol::Snapshot::get_IsValid)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x60251e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Protocol::Snapshot*>(),
                    {::i2c::class_of<::Fusion::Protocol::Snapshot*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::Snapshot.get_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Fusion::Protocol::Snapshot::*)()>(&::Fusion::Protocol::Snapshot::get_Data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60252a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::Snapshot*>(),
                        {"get_Data", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::Snapshot.set_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::Snapshot::*)(::ArrayW<uint8_t>)>(&::Fusion::Protocol::Snapshot::set_Data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60252b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::Snapshot*>(),
                        {"set_Data", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::Snapshot.get_CRC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Fusion::Protocol::Snapshot::*)()>(&::Fusion::Protocol::Snapshot::get_CRC)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60252b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::Snapshot*>(),
                        {"get_CRC", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::Snapshot.set_CRC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::Snapshot::*)(uint64_t)>(&::Fusion::Protocol::Snapshot::set_CRC)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60252c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::Snapshot*>(),
                        {"set_CRC", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::Snapshot._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::Snapshot::*)()>(&::Fusion::Protocol::Snapshot::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x60252c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::Snapshot*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::Snapshot._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::Snapshot::*)(int32_t, uint32_t, ::Fusion::Protocol::SnapshotType, int32_t, ::ArrayW<uint8_t>, ::Fusion::Protocol::ProtocolMessageVersion, ::System::Version*)>(&::Fusion::Protocol::Snapshot::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x60252d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::Snapshot*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Fusion::Protocol::SnapshotType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Fusion::Protocol::ProtocolMessageVersion>(), ::i2c::type_of<::System::Version*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::Snapshot.SerializeProtected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::Snapshot::*)(::Fusion::Protocol::BitStream*)>(&::Fusion::Protocol::Snapshot::SerializeProtected)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6025348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Protocol::Snapshot*>(),
                    {::i2c::class_of<::Fusion::Protocol::Snapshot*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::Snapshot.ComputeCRC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::ArrayW<uint8_t>, int32_t)>(&::Fusion::Protocol::Snapshot::ComputeCRC)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6025224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::Snapshot*>(),
                        {"ComputeCRC", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::Snapshot.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Protocol::Message* (::Fusion::Protocol::Snapshot::*)()>(&::Fusion::Protocol::Snapshot::Clone)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6025450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Protocol::Snapshot*>(),
                    {::i2c::class_of<::Fusion::Protocol::Snapshot*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::Snapshot.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Protocol::Snapshot::*)()>(&::Fusion::Protocol::Snapshot::ToString)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x60254a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Protocol::Snapshot*>(),
                    {::i2c::class_of<::Fusion::Protocol::Snapshot*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::Protocol::Snapshot::__cordl_internal_get__Tick_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Tick_k__BackingField;
}
constexpr int32_t const& Fusion::Protocol::Snapshot::__cordl_internal_get__Tick_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Tick_k__BackingField;
}
constexpr void Fusion::Protocol::Snapshot::__cordl_internal_set__Tick_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Tick_k__BackingField = value;
}
constexpr uint32_t& Fusion::Protocol::Snapshot::__cordl_internal_get__NetworkID_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NetworkID_k__BackingField;
}
constexpr uint32_t const& Fusion::Protocol::Snapshot::__cordl_internal_get__NetworkID_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NetworkID_k__BackingField;
}
constexpr void Fusion::Protocol::Snapshot::__cordl_internal_set__NetworkID_k__BackingField(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____NetworkID_k__BackingField = value;
}
constexpr ::Fusion::Protocol::SnapshotType& Fusion::Protocol::Snapshot::__cordl_internal_get__SnapshotType_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SnapshotType_k__BackingField;
}
constexpr ::Fusion::Protocol::SnapshotType const& Fusion::Protocol::Snapshot::__cordl_internal_get__SnapshotType_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SnapshotType_k__BackingField;
}
constexpr void Fusion::Protocol::Snapshot::__cordl_internal_set__SnapshotType_k__BackingField(::Fusion::Protocol::SnapshotType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SnapshotType_k__BackingField = value;
}
constexpr int32_t& Fusion::Protocol::Snapshot::__cordl_internal_get__TotalSize_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TotalSize_k__BackingField;
}
constexpr int32_t const& Fusion::Protocol::Snapshot::__cordl_internal_get__TotalSize_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TotalSize_k__BackingField;
}
constexpr void Fusion::Protocol::Snapshot::__cordl_internal_set__TotalSize_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TotalSize_k__BackingField = value;
}
constexpr ::ArrayW<uint8_t>& Fusion::Protocol::Snapshot::__cordl_internal_get__Data_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data_k__BackingField;
}
constexpr ::ArrayW<uint8_t> const& Fusion::Protocol::Snapshot::__cordl_internal_get__Data_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data_k__BackingField;
}
constexpr void Fusion::Protocol::Snapshot::__cordl_internal_set__Data_k__BackingField(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Data_k__BackingField = value;
}
constexpr uint64_t& Fusion::Protocol::Snapshot::__cordl_internal_get__CRC_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CRC_k__BackingField;
}
constexpr uint64_t const& Fusion::Protocol::Snapshot::__cordl_internal_get__CRC_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CRC_k__BackingField;
}
constexpr void Fusion::Protocol::Snapshot::__cordl_internal_set__CRC_k__BackingField(uint64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CRC_k__BackingField = value;
}
inline int32_t Fusion::Protocol::Snapshot::get_Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::Snapshot*>(),
                        {"get_Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Fusion::Protocol::Snapshot::set_Tick(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::Snapshot*>(),
                        {"set_Tick", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint32_t Fusion::Protocol::Snapshot::get_NetworkID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::Snapshot*>(),
                        {"get_NetworkID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void Fusion::Protocol::Snapshot::set_NetworkID(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::Snapshot*>(),
                        {"set_NetworkID", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Fusion::Protocol::SnapshotType Fusion::Protocol::Snapshot::get_SnapshotType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::Snapshot*>(),
                        {"get_SnapshotType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Protocol::SnapshotType>(this, ___internal_method);
}
inline void Fusion::Protocol::Snapshot::set_SnapshotType(::Fusion::Protocol::SnapshotType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::Snapshot*>(),
                        {"set_SnapshotType", {}, {::i2c::type_of<::Fusion::Protocol::SnapshotType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Fusion::Protocol::Snapshot::get_TotalSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::Snapshot*>(),
                        {"get_TotalSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Fusion::Protocol::Snapshot::set_TotalSize(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::Snapshot*>(),
                        {"set_TotalSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Fusion::Protocol::Snapshot::get_IsValid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Protocol::Snapshot*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Fusion::Protocol::Snapshot::get_Data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::Snapshot*>(),
                        {"get_Data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Fusion::Protocol::Snapshot::set_Data(::ArrayW<uint8_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::Snapshot*>(),
                        {"set_Data", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint64_t Fusion::Protocol::Snapshot::get_CRC()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::Snapshot*>(),
                        {"get_CRC", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline void Fusion::Protocol::Snapshot::set_CRC(uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::Snapshot*>(),
                        {"set_CRC", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::Protocol::Snapshot::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::Snapshot*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Protocol::Snapshot::_ctor(int32_t  tick, uint32_t  networkID, ::Fusion::Protocol::SnapshotType  snapshotType, int32_t  snapshotSize, ::ArrayW<uint8_t>  data, ::Fusion::Protocol::ProtocolMessageVersion  protocolVersion, ::System::Version*  serializationVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::Snapshot*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Fusion::Protocol::SnapshotType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Fusion::Protocol::ProtocolMessageVersion>(), ::i2c::type_of<::System::Version*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tick, networkID, snapshotType, snapshotSize, data, protocolVersion, serializationVersion);
}
inline void Fusion::Protocol::Snapshot::SerializeProtected(::Fusion::Protocol::BitStream*  stream)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Protocol::Snapshot*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream);
}
inline uint64_t Fusion::Protocol::Snapshot::ComputeCRC(::ArrayW<uint8_t>  data, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::Snapshot*>(),
                        {"ComputeCRC", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, data, length);
}
inline ::Fusion::Protocol::Message* Fusion::Protocol::Snapshot::Clone()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Protocol::Snapshot*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Protocol::Message*>(this, ___internal_method);
}
inline ::StringW Fusion::Protocol::Snapshot::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Protocol::Snapshot*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Fusion::Protocol::Snapshot* Fusion::Protocol::Snapshot::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Protocol::Snapshot*>());
}
inline ::Fusion::Protocol::Snapshot* Fusion::Protocol::Snapshot::New_ctor(int32_t  tick, uint32_t  networkID, ::Fusion::Protocol::SnapshotType  snapshotType, int32_t  snapshotSize, ::ArrayW<uint8_t>  data, ::Fusion::Protocol::ProtocolMessageVersion  protocolVersion, ::System::Version*  serializationVersion)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Protocol::Snapshot*>(tick, networkID, snapshotType, snapshotSize, data, protocolVersion, serializationVersion));
}
// Ctor Parameters []
constexpr ::Fusion::Protocol::Snapshot::Snapshot()   {
}
