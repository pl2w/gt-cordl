#pragma once
// IWYU pragma private; include "Pathfinding/Serialization/SerializeSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/Serialization/zzzz__SerializeSettings_def.hpp"
//  Writing Method size for method: ::Pathfinding::Serialization::SerializeSettings.get_Settings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Serialization::SerializeSettings* (*)()>(&::Pathfinding::Serialization::SerializeSettings::get_Settings)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5ecdccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::SerializeSettings*>(),
                        {"get_Settings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Serialization::SerializeSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Serialization::SerializeSettings::*)()>(&::Pathfinding::Serialization::SerializeSettings::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ed232c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::SerializeSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Pathfinding::Serialization::SerializeSettings::__cordl_internal_get_nodes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodes;
}
constexpr bool const& Pathfinding::Serialization::SerializeSettings::__cordl_internal_get_nodes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodes;
}
constexpr void Pathfinding::Serialization::SerializeSettings::__cordl_internal_set_nodes(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nodes = value;
}
constexpr bool& Pathfinding::Serialization::SerializeSettings::__cordl_internal_get_prettyPrint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prettyPrint;
}
constexpr bool const& Pathfinding::Serialization::SerializeSettings::__cordl_internal_get_prettyPrint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prettyPrint;
}
constexpr void Pathfinding::Serialization::SerializeSettings::__cordl_internal_set_prettyPrint(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prettyPrint = value;
}
constexpr bool& Pathfinding::Serialization::SerializeSettings::__cordl_internal_get_editorSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___editorSettings;
}
constexpr bool const& Pathfinding::Serialization::SerializeSettings::__cordl_internal_get_editorSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___editorSettings;
}
constexpr void Pathfinding::Serialization::SerializeSettings::__cordl_internal_set_editorSettings(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___editorSettings = value;
}
inline ::Pathfinding::Serialization::SerializeSettings* Pathfinding::Serialization::SerializeSettings::get_Settings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::SerializeSettings*>(),
                        {"get_Settings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Serialization::SerializeSettings*>(nullptr, ___internal_method);
}
inline void Pathfinding::Serialization::SerializeSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Serialization::SerializeSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::Serialization::SerializeSettings* Pathfinding::Serialization::SerializeSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Serialization::SerializeSettings*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::Serialization::SerializeSettings::SerializeSettings()   {
}
