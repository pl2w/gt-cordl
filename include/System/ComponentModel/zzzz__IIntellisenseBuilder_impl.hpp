#pragma once
// IWYU pragma private; include "System/ComponentModel/IIntellisenseBuilder.hpp"
#include "System/ComponentModel/zzzz__IIntellisenseBuilder_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::IIntellisenseBuilder.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::IIntellisenseBuilder::*)()>(&::System::ComponentModel::IIntellisenseBuilder::get_Name)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::IIntellisenseBuilder*>(),
                    {::i2c::class_of<::System::ComponentModel::IIntellisenseBuilder*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::IIntellisenseBuilder.Show
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::IIntellisenseBuilder::*)(::StringW, ::StringW, ::by_ref<::StringW>)>(&::System::ComponentModel::IIntellisenseBuilder::Show)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::IIntellisenseBuilder*>(),
                    {::i2c::class_of<::System::ComponentModel::IIntellisenseBuilder*>(), 1}
                ));
    return ___internal_method;
  }
};
inline ::StringW System::ComponentModel::IIntellisenseBuilder::get_Name()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::IIntellisenseBuilder*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::ComponentModel::IIntellisenseBuilder::Show(::StringW  language, ::StringW  value, ::by_ref<::StringW>  newValue)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::IIntellisenseBuilder*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, language, value, newValue);
}
