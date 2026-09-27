#pragma once
// IWYU pragma private; include "System/ComponentModel/InstanceCreationEditor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/ComponentModel/zzzz__InstanceCreationEditor_def.hpp"
#include "System/ComponentModel/zzzz__ITypeDescriptorContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::InstanceCreationEditor.get_Text
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::InstanceCreationEditor::*)()>(&::System::ComponentModel::InstanceCreationEditor::get_Text)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xad5898c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::InstanceCreationEditor*>(),
                    {::i2c::class_of<::System::ComponentModel::InstanceCreationEditor*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::InstanceCreationEditor.CreateInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::InstanceCreationEditor::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*)>(&::System::ComponentModel::InstanceCreationEditor::CreateInstance)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::InstanceCreationEditor*>(),
                    {::i2c::class_of<::System::ComponentModel::InstanceCreationEditor*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::InstanceCreationEditor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::InstanceCreationEditor::*)()>(&::System::ComponentModel::InstanceCreationEditor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad589cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::InstanceCreationEditor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW System::ComponentModel::InstanceCreationEditor::get_Text()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::InstanceCreationEditor*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Object* System::ComponentModel::InstanceCreationEditor::CreateInstance(::System::ComponentModel::ITypeDescriptorContext*  context, ::System::Type*  instanceType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::InstanceCreationEditor*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, context, instanceType);
}
inline void System::ComponentModel::InstanceCreationEditor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::InstanceCreationEditor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ComponentModel::InstanceCreationEditor* System::ComponentModel::InstanceCreationEditor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::InstanceCreationEditor*>());
}
// Ctor Parameters []
constexpr ::System::ComponentModel::InstanceCreationEditor::InstanceCreationEditor()   {
}
