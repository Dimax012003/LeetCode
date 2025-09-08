import pandas as pd


def project_employees_i(project: pd.DataFrame, employee: pd.DataFrame) -> pd.DataFrame:
    merged_df = pd.merge(project, employee, left_on='employee_id', right_on='employee_id', how='left')

    grouped_df = merged_df.groupby('project_id')['experience_years']

    calculated_df = grouped_df.agg(lambda x: round(x.mean(), 2))

    new_calculated_df = calculated_df.reset_index()

    average_experience_years_employees = new_calculated_df.rename(columns={'experience_years': 'average_years'})

    return average_experience_years_employees