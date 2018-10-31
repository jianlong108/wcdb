/*
 * Tencent is pleased to support the open source community by making
 * WCDB available.
 *
 * Copyright (C) 2017 THL A29 Limited, a Tencent company.
 * All rights reserved.
 *
 * Licensed under the BSD 3-Clause License (the "License"); you may not use
 * this file except in compliance with the License. You may obtain a copy of
 * the License at
 *
 *       https://opensource.org/licenses/BSD-3-Clause
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ForeignKey_hpp
#define ForeignKey_hpp

#include <WCDB/SQL.hpp>

namespace WCDB {

class ForeignKey : public TypedSyntax<Syntax::ForeignKeyClause, SQL> {
public:
    ForeignKey& references(const String& table);
    ForeignKey& references(const String& table, const Columns& columns);

    ForeignKey& onDeleteSetNull();
    ForeignKey& onDeleteSetDefault();
    ForeignKey& onDeleteCascade();
    ForeignKey& onDeleteRestrict();
    ForeignKey& onDeleteNoAction();

    ForeignKey& onUpdateSetNull();
    ForeignKey& onUpdateSetDefault();
    ForeignKey& onUpdateCascade();
    ForeignKey& onUpdateRestrict();
    ForeignKey& onUpdateNoAction();

    ForeignKey& match(const String& name);

    ForeignKey& deferrable();
    ForeignKey& deferrableInitiallyDeferred();
    ForeignKey& deferrableInitiallyImmediate();
    ForeignKey& notDeferrable();
    ForeignKey& notDeferrableInitiallyDeferred();
    ForeignKey& notDeferrableInitiallyImmediate();
};

} // namespace WCDB

#endif /* ForeignKey_hpp */
