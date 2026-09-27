#pragma once
// IWYU pragma private; include "Meta/Conduit/IManifestMethod.hpp"
#include "Meta/Conduit/zzzz__IManifestMethod_def.hpp"
#include "Meta/Conduit/zzzz__ManifestParameter_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Meta::Conduit::IManifestMethod.get_ID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::Conduit::IManifestMethod::*)()>(&::Meta::Conduit::IManifestMethod::get_ID)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Conduit::IManifestMethod*>(),
                    {::i2c::class_of<::Meta::Conduit::IManifestMethod*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::IManifestMethod.get_Parameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Meta::Conduit::ManifestParameter*>* (::Meta::Conduit::IManifestMethod::*)()>(&::Meta::Conduit::IManifestMethod::get_Parameters)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Conduit::IManifestMethod*>(),
                    {::i2c::class_of<::Meta::Conduit::IManifestMethod*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::IManifestMethod.get_Assembly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::Conduit::IManifestMethod::*)()>(&::Meta::Conduit::IManifestMethod::get_Assembly)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Conduit::IManifestMethod*>(),
                    {::i2c::class_of<::Meta::Conduit::IManifestMethod*>(), 2}
                ));
    return ___internal_method;
  }
};
inline ::StringW Meta::Conduit::IManifestMethod::get_ID()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Conduit::IManifestMethod*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::Meta::Conduit::ManifestParameter*>* Meta::Conduit::IManifestMethod::get_Parameters()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Conduit::IManifestMethod*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Meta::Conduit::ManifestParameter*>*>(this, ___internal_method);
}
inline ::StringW Meta::Conduit::IManifestMethod::get_Assembly()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Conduit::IManifestMethod*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
