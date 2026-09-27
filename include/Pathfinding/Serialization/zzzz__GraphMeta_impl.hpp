#pragma once
// IWYU pragma private; include "Pathfinding/Serialization/GraphMeta.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/Serialization/zzzz__GraphMeta_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__Version_def.hpp"
//  Writing Method size for method: ::Pathfinding::Serialization::GraphMeta.GetGraphType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Pathfinding::Serialization::GraphMeta::*)(int32_t, ::ArrayW<::System::Type*>)>(&::Pathfinding::Serialization::GraphMeta::GetGraphType)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5ed0678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::GraphMeta*>(),
                        {"GetGraphType", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Type*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::GraphMeta._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Serialization::GraphMeta::*)()>(&::Pathfinding::Serialization::GraphMeta::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ecdf58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::GraphMeta*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Version*& Pathfinding::Serialization::GraphMeta::__cordl_internal_get_version()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___version;
}
constexpr ::System::Version* const& Pathfinding::Serialization::GraphMeta::__cordl_internal_get_version() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___version;
}
constexpr void Pathfinding::Serialization::GraphMeta::__cordl_internal_set_version(::System::Version*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___version = value;
}
constexpr int32_t& Pathfinding::Serialization::GraphMeta::__cordl_internal_get_graphs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphs;
}
constexpr int32_t const& Pathfinding::Serialization::GraphMeta::__cordl_internal_get_graphs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphs;
}
constexpr void Pathfinding::Serialization::GraphMeta::__cordl_internal_set_graphs(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___graphs = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& Pathfinding::Serialization::GraphMeta::__cordl_internal_get_guids()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___guids;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& Pathfinding::Serialization::GraphMeta::__cordl_internal_get_guids() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___guids;
}
constexpr void Pathfinding::Serialization::GraphMeta::__cordl_internal_set_guids(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___guids = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& Pathfinding::Serialization::GraphMeta::__cordl_internal_get_typeNames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___typeNames;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& Pathfinding::Serialization::GraphMeta::__cordl_internal_get_typeNames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___typeNames;
}
constexpr void Pathfinding::Serialization::GraphMeta::__cordl_internal_set_typeNames(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___typeNames = value;
}
inline ::System::Type* Pathfinding::Serialization::GraphMeta::GetGraphType(int32_t  index, ::ArrayW<::System::Type*>  availableGraphTypes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::GraphMeta*>(),
                        {"GetGraphType", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Type*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, index, availableGraphTypes);
}
inline void Pathfinding::Serialization::GraphMeta::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::GraphMeta*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::Serialization::GraphMeta* Pathfinding::Serialization::GraphMeta::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Serialization::GraphMeta*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::Serialization::GraphMeta::GraphMeta()   {
}
