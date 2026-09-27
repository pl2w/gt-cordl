#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/Entities/WitEntityDataBase_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/WitAi/Data/Entities/zzzz__WitEntityDataBase_1_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseNode_def.hpp"
template<typename T>
constexpr ::Meta::WitAi::Json::WitResponseNode*& Meta::WitAi::Data::Entities::WitEntityDataBase_1<T>::__cordl_internal_get_responseNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___responseNode;
}
template<typename T>
constexpr ::Meta::WitAi::Json::WitResponseNode* const& Meta::WitAi::Data::Entities::WitEntityDataBase_1<T>::__cordl_internal_get_responseNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___responseNode;
}
template<typename T>
constexpr void Meta::WitAi::Data::Entities::WitEntityDataBase_1<T>::__cordl_internal_set_responseNode(::Meta::WitAi::Json::WitResponseNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___responseNode = value;
}
template<typename T>
constexpr T& Meta::WitAi::Data::Entities::WitEntityDataBase_1<T>::__cordl_internal_get_value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
template<typename T>
constexpr T const& Meta::WitAi::Data::Entities::WitEntityDataBase_1<T>::__cordl_internal_get_value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
template<typename T>
constexpr void Meta::WitAi::Data::Entities::WitEntityDataBase_1<T>::__cordl_internal_set_value(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___value = value;
}
template<typename T>
inline ::Meta::WitAi::Data::Entities::WitEntityDataBase_1<T>* Meta::WitAi::Data::Entities::WitEntityDataBase_1<T>::FromEntityWitResponseNode(::Meta::WitAi::Json::WitResponseNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::WitEntityDataBase_1<T>*>(),
                        {"FromEntityWitResponseNode", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Data::Entities::WitEntityDataBase_1<T>*>(this, ___internal_method, node);
}
template<typename T>
inline ::StringW Meta::WitAi::Data::Entities::WitEntityDataBase_1<T>::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Data::Entities::WitEntityDataBase_1<T>*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template<typename T>
inline void Meta::WitAi::Data::Entities::WitEntityDataBase_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::WitEntityDataBase_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Meta::WitAi::Data::Entities::WitEntityDataBase_1<T>* Meta::WitAi::Data::Entities::WitEntityDataBase_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Data::Entities::WitEntityDataBase_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Meta::WitAi::Data::Entities::WitEntityDataBase_1<T>::WitEntityDataBase_1()   {
}
