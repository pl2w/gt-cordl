#pragma once
// IWYU pragma private; include "System/ComponentModel/ComponentEditor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/ComponentModel/zzzz__ComponentEditor_def.hpp"
#include "System/ComponentModel/zzzz__ITypeDescriptorContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::ComponentEditor.EditComponent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::ComponentEditor::*)(::System::Object*)>(&::System::ComponentModel::ComponentEditor::EditComponent)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xad4a43c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ComponentEditor*>(),
                        {"EditComponent", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ComponentEditor.EditComponent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::ComponentEditor::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Object*)>(&::System::ComponentModel::ComponentEditor::EditComponent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::ComponentEditor*>(),
                    {::i2c::class_of<::System::ComponentModel::ComponentEditor*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ComponentEditor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ComponentEditor::*)()>(&::System::ComponentModel::ComponentEditor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad4a450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ComponentEditor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool System::ComponentModel::ComponentEditor::EditComponent(::System::Object*  component)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ComponentEditor*>(),
                        {"EditComponent", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, component);
}
inline bool System::ComponentModel::ComponentEditor::EditComponent(::System::ComponentModel::ITypeDescriptorContext*  context, ::System::Object*  component)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::ComponentEditor*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context, component);
}
inline void System::ComponentModel::ComponentEditor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ComponentEditor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ComponentModel::ComponentEditor* System::ComponentModel::ComponentEditor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::ComponentEditor*>());
}
// Ctor Parameters []
constexpr ::System::ComponentModel::ComponentEditor::ComponentEditor()   {
}
